#![no_std]
#![crate_type = "staticlib"]

mod pros;


use core::panic::PanicInfo;

/// This function is called on panic.
#[panic_handler]
fn panic(_info: &PanicInfo) -> ! {
    loop {}
}
