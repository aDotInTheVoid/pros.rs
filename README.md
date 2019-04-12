# pros.rs
[![Build Status](https://travis-ci.com/aDotInTheVoid/pros.rs.svg?branch=master)](https://travis-ci.com/aDotInTheVoid/pros.rs)


This is a **_HIGHLY_** unstable/WIP atempt to be able to run rust code on the vex v5 throught the PROS kernal/API

```bash
cargo build --target armv7r-none-eabi
```

### TODO
- [X] PROS API bindgen
- [ ] Rusty abstractions around PROS consepts 
- [ ] Safe rust API that detects invariants
- [ ] Build system updates to allow linking
- [ ] rustc target for Cortex A9 / FreeRTOS 

### Notes

Were compiling to a [ARM Cortex A9](https://silver.arm.com/download/Software/BX100-DA-98001-r0p0-01rel3/DEN0013D_cortex_a_series_PG.pdf).

- 128 MB RAM
- 32 MB FLASH

#### Rustc Target
```
$ rustc --print target-list | grep arm | grep none | grep eabi
arm eb v7r-none-eabi 
arm eb v7r-none-eabi hf
arm    v7r-none-eabi 
arm    v7r-none-eabi hf
```

eb -> endian big

[ARM can be both](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.den0024a/ch08s02.html)

hf -> hard float

#### Type sizes
- [One random Link](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dui0067d/BABFCGFC.html)
- [Another random link](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.den0024a/ch08s02.html)


##### Tupe tabl

FFI type      | Rust Native Type
--------------|-----------------
`c_char`      | `u8`
`c_double`	  | `f64`
`c_float`     | `f32`
`c_int`       | `i32`
`c_long`      | `i32`
`c_longlong	` | `i64`
`c_schar`     | `i8`
`c_short`     | `i16`
`c_uchar`     | `u8`
`c_uint`      | `u32`
`c_ulong`     | `u32`
`c_ulonglong` | `u64`
`c_ushort`    | `u16`

