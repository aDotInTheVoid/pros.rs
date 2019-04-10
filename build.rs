extern crate bindgen;

use std::env;
use std::path::PathBuf;

use std::io::prelude::*;
use walkdir::{DirEntry, WalkDir};
use std::process::Command;

fn main() {
    
    let out_dir =env::var("OUT_DIR").unwrap();
    let out_h_loc = out_dir + "/libpros.h";
    // Preprocess the c code
    Command::new("gcc")
        .arg("-I").arg("./include/")
        .arg("-E").arg("include/rust.h")
        .arg("-o").arg(out_h_loc.clone())
        .output()
        .expect("failed to preprocess code");

    // The bindgen::Builder is the main entry point
    // to bindgen, and lets you build up options for
    // the resulting bindings.
    let bindings = bindgen::Builder::default()

        .header(out_h_loc.clone())
        // Finish the builder and generate the bindings.
        .generate()
        // Unwrap the Result and panic on failure.
        .expect("Unable to generate bindings");

    // Write the bindings to the $OUT_DIR/bindings.rs file.
    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap());
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}
