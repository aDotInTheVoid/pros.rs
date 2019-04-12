#![allow(non_camel_case_types)]
#![no_std]

pub use core::ffi::c_void;

// arm-none-eabi-gcc -E
// /nix/store/761ja2dd8nl8kb52ayh6a99r8vy4a0bw-gcc-arm-embedded-6-2017-q2-update/bin/
// ../lib/gcc/arm-none-eabi/6.3.1/include-fixed/limits.h
// | grep -v \# | grep typedef | grep -v struct

// typedef signed char __int8_t;
// typedef unsigned char __uint8_t;
// typedef short int __int16_t;
// typedef short unsigned int __uint16_t;
// typedef long int __int32_t;
// typedef long unsigned int __uint32_t;
// typedef long long int __int64_t;
// typedef long long unsigned int __uint64_t;
// typedef signed char __int_least8_t;
// typedef unsigned char __uint_least8_t;
// typedef short int __int_least16_t;
// typedef short unsigned int __uint_least16_t;
// typedef long int __int_least32_t;
// typedef long unsigned int __uint_least32_t;
// typedef long long int __int_least64_t;
// typedef long long unsigned int __uint_least64_t;
// typedef long long int __intmax_t;
// typedef long long unsigned int __uintmax_t;
// typedef int __intptr_t;
// typedef unsigned int __uintptr_t;
// typedef int ptrdiff_t;
// typedef unsigned int size_t;
// typedef unsigned int wchar_t;

#[cfg(target_arch = "arm")]
mod cortex_types {
    // Unknown, should add sources
    pub type c_char = u8; // char
    pub type c_double = f64; // double
    pub type c_float = f32; // float
    pub type c_int = i32; // int
    pub type c_uint = u32; // unsigned int

    // Unsigned versions of unknowns
    pub type c_ulong = u32; // unsigned long int
    pub type c_ulonglong = u64; // unsigned long long int
    pub type c_ushort = u16; // unsigned short int

    /// `typedef long int __int32_t;`
    pub type c_long = i32;

    /// `typedef long long int __int64_t;`
    pub type c_longlong = i64;

    /// `typedef signed char __int8_t;`
    pub type c_schar = i8; // signed char

    /// `typedef short int __int16_t;`
    pub type c_short = i16; // short int

    /// `typedef unsigned char __uint8_t;`
    pub type c_uchar = u8; // unsigned char

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
