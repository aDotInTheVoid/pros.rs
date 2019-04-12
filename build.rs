extern crate bindgen;

use std::env;
use std::path::PathBuf;

//use std::io::prelude::*;
use std::process::Command;

const H_FILE_NAME: &str = "/libpros.h";
const CC: &str = "gcc";

pub fn bindgen(){
    // We only want to rerun the build process if the include dir has changes
    println!("cargo:rerun-if-changed=include");

    println!("Generating PROS bindings");

    let out_dir =env::var("OUT_DIR").unwrap();
    let out_h_loc = out_dir + H_FILE_NAME;

    // Preprocess the c code
    Command::new(CC)
        // Set the include path
        .arg("-I").arg("./include/")
        // Input rust.h
        .arg("-E").arg("include/rust.h")
        // Output to somewhere in target
        .arg("-o").arg(out_h_loc.clone())
        .output()
        .expect("failed to preprocess code");


    let bindings = bindgen::Builder::default()
        .ctypes_prefix("::libc")
        .use_core()
        .rustfmt_bindings(true)
        .header(out_h_loc.clone())
       
        .generate()

        .expect("Unable to generate bindings");

    // Write the bindings to the $OUT_DIR/bindings.rs file.
    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap());

    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");

    println!("Generated PROS bindings")
}


//use pros_bindgen::bindgen;

fn main(){
    bindgen();
}
