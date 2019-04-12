#![allow(non_camel_case_types)]
#![no_std]

pub use core::ffi::c_void;



#[cfg(target_arch = "arm")]
mod cortex_types {
    pub type c_char = u8; // char
    pub type c_double = f64; // double
    pub type c_float = f32; // float
    pub type c_int = i32; // int
    pub type c_long = i32; // long int
    pub type c_longlong = i64; // long long int
    pub type c_schar = i8; // signed char
    pub type c_short = i16; // short int
    pub type c_uchar = u8; // unsigned char
    pub type c_uint = u32; // unsigned int
    pub type c_ulong = u32; // unsigned long int
    pub type c_ulonglong = u64; // unsigned long long int
    pub type c_ushort = u16; // unsigned short int
}


// Major hack to allow x86 tests to work
#[cfg(target_arch = "arm")]
pub use cortex_types::*;

#[cfg(not(target_arch = "arm"))]
pub use libc::*;

#[cfg(test)]
mod tests {
    #[test]
    fn it_works() {
        assert_eq!(2 + 2, 4);
    }
}
