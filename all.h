# 1 "include/main.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 329 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "include/main.h" 2
# 37 "include/main.h"
# 1 "./include/api.h" 1
# 32 "./include/api.h"
# 1 "/usr/include/errno.h" 1 3 4
# 23 "/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 72 "/usr/include/sys/errno.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 533 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 534 "/usr/include/sys/cdefs.h" 2 3 4
# 599 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 600 "/usr/include/sys/cdefs.h" 2 3 4
# 73 "/usr/include/sys/errno.h" 2 3 4



# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 77 "/usr/include/sys/errno.h" 2 3 4



extern int * __error(void);
# 24 "/usr/include/errno.h" 2 3 4
# 33 "./include/api.h" 2
# 1 "/usr/include/math.h" 1 3 4
# 31 "/usr/include/math.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 172 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 173 "/usr/include/Availability.h" 2 3 4
# 32 "/usr/include/math.h" 2 3 4
# 44 "/usr/include/math.h" 3 4
    typedef float float_t;
    typedef double double_t;
# 111 "/usr/include/math.h" 3 4
extern int __math_errhandling(void);
# 144 "/usr/include/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 188 "/usr/include/math.h" 3 4
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= 2.2250738585072014e-308;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
# 322 "/usr/include/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 565 "/usr/include/math.h" 3 4
extern float __inff(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
extern double __inf(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
extern long double __infl(void) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern float __nan(void) __attribute__((availability(macosx,introduced=10.0)));
# 597 "/usr/include/math.h" 3 4
extern float __exp10f(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __exp10(double) __attribute__((availability(macosx,introduced=10.9)));





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);
# 614 "/usr/include/math.h" 3 4
extern float __cospif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __cospi(double) __attribute__((availability(macosx,introduced=10.9)));
extern float __sinpif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __sinpi(double) __attribute__((availability(macosx,introduced=10.9)));
extern float __tanpif(float) __attribute__((availability(macosx,introduced=10.9)));
extern double __tanpi(double) __attribute__((availability(macosx,introduced=10.9)));
# 645 "/usr/include/math.h" 3 4
inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double) __attribute__((availability(macosx,introduced=10.0)));
extern double j1(double) __attribute__((availability(macosx,introduced=10.0)));
extern double jn(int, double) __attribute__((availability(macosx,introduced=10.0)));
extern double y0(double) __attribute__((availability(macosx,introduced=10.0)));
extern double y1(double) __attribute__((availability(macosx,introduced=10.0)));
extern double yn(int, double) __attribute__((availability(macosx,introduced=10.0)));
extern double scalb(double, double);
extern int signgam;
# 751 "/usr/include/math.h" 3 4
extern long int rinttol(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern long int roundtol(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double drem(double, double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern int finite(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double gamma(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));

extern double significand(double) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));


struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

extern int matherr(struct exception *) __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)));
# 34 "./include/api.h" 2
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stdbool.h" 1 3 4
# 35 "./include/api.h" 2
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 1 3 4
# 51 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 62 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 76 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
typedef long unsigned int rsize_t;
# 90 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
typedef int wchar_t;
# 118 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 3 4
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/__stddef_max_align_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/__stddef_max_align_t.h" 3 4
typedef long double max_align_t;
# 119 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 2 3 4
# 36 "./include/api.h" 2
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stdint.h" 1 3 4
# 63 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;





# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 53 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 64 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stdint.h" 2 3 4
# 37 "./include/api.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 67 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 39 "/usr/include/sys/stdio.h" 3 4
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 231 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 296 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 315 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );
# 337 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 348 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 374 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam" );
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 436 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 437 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 452 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 492 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 493 "/usr/include/stdio.h" 2 3 4
# 38 "./include/api.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4








# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 83 "/usr/include/sys/signal.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 156 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 390 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 80 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 383 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 29 "/usr/include/alloca.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/alloca.h" 2 3 4


void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 74 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;



# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 100 "/usr/include/stdlib.h" 2 3 4
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" ) __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 39 "./include/api.h" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 84 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/usr/include/sys/unistd.h" 2 3 4
# 122 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/usr/include/sys/unistd.h" 2 3 4
# 132 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 179 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 180 "/usr/include/sys/unistd.h" 2 3 4





int getattrlistbulk(int, void *, void *, size_t, uint64_t) __attribute__((availability(macosx,introduced=10.10)));
# 194 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 195 "/usr/include/sys/unistd.h" 2 3 4



# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 199 "/usr/include/sys/unistd.h" 2 3 4




int faccessat(int, const char *, int, int) __attribute__((availability(macosx,introduced=10.10)));
int fchownat(int, const char *, uid_t, gid_t, int) __attribute__((availability(macosx,introduced=10.10)));
int linkat(int, const char *, int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
ssize_t readlinkat(int, const char *, char *, size_t) __attribute__((availability(macosx,introduced=10.10)));
int symlinkat(const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
int unlinkat(int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) __attribute__((availability(macosx,introduced=10.10)));
# 73 "/usr/include/unistd.h" 2 3 4







# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 81 "/usr/include/unistd.h" 2 3 4


# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 85 "/usr/include/unistd.h" 2 3 4
# 429 "/usr/include/unistd.h" 3 4
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execle(const char *, const char *, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execlp(const char *, const char *, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execv(const char *, char * const *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execve(const char *, char * const *, char * const *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execvp(const char *, char * const *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
pid_t fork(void) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write" );
# 506 "/usr/include/unistd.h" 3 4
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
# 536 "/usr/include/unistd.h" 3 4
__attribute__((deprecated)) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" );

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" );






__attribute__((deprecated)) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
# 624 "/usr/include/unistd.h" 3 4
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
# 638 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 75 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 46 "/usr/include/sys/_types/_fd_def.h" 3 4
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[(unsigned long)_n/(sizeof(__int32_t) * 8)] & ((__int32_t)(1<<((unsigned long)_n % (sizeof(__int32_t) * 8)))));
}
# 76 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/select.h" 2 3 4







# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/usr/include/sys/select.h" 2 3 4
# 100 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/usr/include/sys/select.h" 2 3 4






int pselect(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, const struct timespec * restrict,
  const sigset_t * restrict)




  __asm("_" "pselect" "$1050")




  ;



# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, struct timeval * restrict)




  __asm("_" "select" "$1050")




  ;
# 130 "/usr/include/sys/select.h" 2 3 4
# 639 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 643 "/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
void endusershell(void);
int execvP(const char *, const char *, char * const *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);





# 1 "/usr/include/gethostuuid.h" 1 3 4
# 39 "/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macosx,introduced=10.5)));
# 659 "/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
# 736 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;
# 40 "./include/api.h" 2
# 50 "./include/api.h"
# 1 "./include/pros/adi.h" 1
# 34 "./include/pros/adi.h"
typedef enum adi_port_config_e {
 E_ADI_ANALOG_IN = 0,
 E_ADI_ANALOG_OUT = 1,
 E_ADI_DIGITAL_IN = 2,
 E_ADI_DIGITAL_OUT = 3,




 E_ADI_SMART_BUTTON __attribute__((deprecated("use E_ADI_DIGITAL_IN instead"))) = E_ADI_DIGITAL_IN,
 E_ADI_SMART_POT __attribute__((deprecated("use E_ADI_ANALOG_IN instead"))) = E_ADI_ANALOG_IN,

 E_ADI_LEGACY_BUTTON __attribute__((deprecated("use E_ADI_DIGITAL_IN instead"))) = E_ADI_DIGITAL_IN,
 E_ADI_LEGACY_POT __attribute__((deprecated("use E_ADI_ANALOG_IN instead"))) = E_ADI_ANALOG_IN,
 E_ADI_LEGACY_LINE_SENSOR __attribute__((deprecated("use E_ADI_ANALOG_IN instead"))) = E_ADI_ANALOG_IN,
 E_ADI_LEGACY_LIGHT_SENSOR __attribute__((deprecated("use E_ADI_ANALOG_IN instead"))) = E_ADI_ANALOG_IN,
 E_ADI_LEGACY_GYRO = 10,
 E_ADI_LEGACY_ACCELEROMETER __attribute__((deprecated("use E_ADI_ANALOG_IN instead"))) = E_ADI_ANALOG_IN,




 E_ADI_LEGACY_SERVO = 12,
 E_ADI_LEGACY_PWM = 13,

 E_ADI_LEGACY_ENCODER = 14,
 E_ADI_LEGACY_ULTRASONIC = 15,

 E_ADI_TYPE_UNDEFINED = 255,
 E_ADI_ERR = (2147483647)
} adi_port_config_e_t;
# 134 "./include/pros/adi.h"
adi_port_config_e_t adi_port_get_config(uint8_t port);
# 150 "./include/pros/adi.h"
int32_t adi_port_get_value(uint8_t port);
# 168 "./include/pros/adi.h"
int32_t adi_port_set_config(uint8_t port, adi_port_config_e_t type);
# 190 "./include/pros/adi.h"
int32_t adi_port_set_value(uint8_t port, int32_t value);
# 255 "./include/pros/adi.h"
int32_t adi_analog_calibrate(uint8_t port);
# 276 "./include/pros/adi.h"
int32_t adi_analog_read(uint8_t port);
# 299 "./include/pros/adi.h"
int32_t adi_analog_read_calibrated(uint8_t port);
# 327 "./include/pros/adi.h"
int32_t adi_analog_read_calibrated_HR(uint8_t port);
# 348 "./include/pros/adi.h"
int32_t adi_digital_read(uint8_t port);
# 373 "./include/pros/adi.h"
int32_t adi_digital_get_new_press(uint8_t port);
# 395 "./include/pros/adi.h"
int32_t adi_digital_write(uint8_t port, const _Bool value);
# 413 "./include/pros/adi.h"
int32_t adi_pin_mode(uint8_t port, uint8_t mode);
# 433 "./include/pros/adi.h"
int32_t adi_motor_set(uint8_t port, int8_t speed);
# 449 "./include/pros/adi.h"
int32_t adi_motor_get(uint8_t port);
# 466 "./include/pros/adi.h"
int32_t adi_motor_stop(uint8_t port);







typedef int32_t adi_encoder_t;
# 493 "./include/pros/adi.h"
int32_t adi_encoder_get(adi_encoder_t enc);
# 515 "./include/pros/adi.h"
adi_encoder_t adi_encoder_init(uint8_t port_top, uint8_t port_bottom, const _Bool reverse);
# 535 "./include/pros/adi.h"
int32_t adi_encoder_reset(adi_encoder_t enc);
# 552 "./include/pros/adi.h"
int32_t adi_encoder_shutdown(adi_encoder_t enc);







typedef int32_t adi_ultrasonic_t;
# 581 "./include/pros/adi.h"
int32_t adi_ultrasonic_get(adi_ultrasonic_t ult);
# 602 "./include/pros/adi.h"
adi_ultrasonic_t adi_ultrasonic_init(uint8_t port_ping, uint8_t port_echo);
# 619 "./include/pros/adi.h"
int32_t adi_ultrasonic_shutdown(adi_ultrasonic_t ult);







typedef int32_t adi_gyro_t;
# 648 "./include/pros/adi.h"
double adi_gyro_get(adi_gyro_t gyro);
# 672 "./include/pros/adi.h"
adi_gyro_t adi_gyro_init(uint8_t port, double multiplier);
# 689 "./include/pros/adi.h"
int32_t adi_gyro_reset(adi_gyro_t gyro);
# 706 "./include/pros/adi.h"
int32_t adi_gyro_shutdown(adi_gyro_t gyro);
# 51 "./include/api.h" 2
# 1 "./include/pros/colors.h" 1
# 52 "./include/api.h" 2
# 1 "./include/pros/llemu.h" 1
# 26 "./include/pros/llemu.h"
# 1 "/usr/include/errno.h" 1 3 4
# 27 "./include/pros/llemu.h" 2

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"

# 1 "./include/display/lvgl.h" 1
# 17 "./include/display/lvgl.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"


# 1 "./include/display/lv_misc/lv_task.h" 1
# 18 "./include/display/lv_misc/lv_task.h"
# 1 "./include/display/lv_misc/lv_ll.h" 1
# 17 "./include/display/lv_misc/lv_ll.h"
# 1 "./include/display/lv_misc/lv_mem.h" 1
# 16 "./include/display/lv_misc/lv_mem.h"
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 1 3 4
# 17 "./include/display/lv_misc/lv_mem.h" 2
# 27 "./include/display/lv_misc/lv_mem.h"
typedef struct {
  uint32_t total_size;
  uint32_t free_cnt;
  uint32_t free_size;
  uint32_t free_biggest_size;
  uint32_t used_cnt;
  uint8_t used_pct;
  uint8_t frag_pct;
} lv_mem_monitor_t;
# 44 "./include/display/lv_misc/lv_mem.h"
void lv_mem_init(void);






void *lv_mem_alloc(uint32_t size);





void lv_mem_free(const void *data);
# 66 "./include/display/lv_misc/lv_mem.h"
void *lv_mem_realloc(void *data_p, uint32_t new_size);




void lv_mem_defrag(void);






void lv_mem_monitor(lv_mem_monitor_t *mon_p);






uint32_t lv_mem_get_size(const void *data);





static inline void lv_mem_assert(void *p) {
  if (p == ((void*)0)) {
    while (1)
      ;
  }
}
# 18 "./include/display/lv_misc/lv_ll.h" 2
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 1 3 4
# 19 "./include/display/lv_misc/lv_ll.h" 2
# 30 "./include/display/lv_misc/lv_ll.h"
typedef uint8_t lv_ll_node_t;


typedef struct {
  uint32_t n_size;
  lv_ll_node_t *head;
  lv_ll_node_t *tail;
} lv_ll_t;
# 48 "./include/display/lv_misc/lv_ll.h"
void lv_ll_init(lv_ll_t *ll_p, uint32_t node_size);






void *lv_ll_ins_head(lv_ll_t *ll_p);







void *lv_ll_ins_prev(lv_ll_t *ll_p, void *n_act);






void *lv_ll_ins_tail(lv_ll_t *ll_p);







void lv_ll_rem(lv_ll_t *ll_p, void *node_p);






void lv_ll_clear(lv_ll_t *ll_p);







void lv_ll_chg_list(lv_ll_t *ll_ori_p, lv_ll_t *ll_new_p, void *node);






void *lv_ll_get_head(lv_ll_t *ll_p);






void *lv_ll_get_tail(lv_ll_t *ll_p);







void *lv_ll_get_next(lv_ll_t *ll_p, void *n_act);







void *lv_ll_get_prev(lv_ll_t *ll_p, void *n_act);
# 19 "./include/display/lv_misc/lv_task.h" 2
# 35 "./include/display/lv_misc/lv_task.h"
typedef enum {
  LV_TASK_PRIO_OFF = 0,
  LV_TASK_PRIO_LOWEST,
  LV_TASK_PRIO_LOW,
  LV_TASK_PRIO_MID,
  LV_TASK_PRIO_HIGH,
  LV_TASK_PRIO_HIGHEST,
  LV_TASK_PRIO_NUM,
} lv_task_prio_t;




typedef struct {
  uint32_t period;
  uint32_t last_run;
  void (*task)(void *);
  void *param;
  uint8_t prio : 3;
  uint8_t once : 1;
} lv_task_t;
# 64 "./include/display/lv_misc/lv_task.h"
void lv_task_init(void);




                          void lv_task_handler(void);
# 79 "./include/display/lv_misc/lv_task.h"
lv_task_t *lv_task_create(void (*task)(void *), uint32_t period,
                          lv_task_prio_t prio, void *param);





void lv_task_del(lv_task_t *lv_task_p);






void lv_task_set_prio(lv_task_t *lv_task_p, lv_task_prio_t prio);






void lv_task_set_period(lv_task_t *lv_task_p, uint32_t period);





void lv_task_ready(lv_task_t *lv_task_p);





void lv_task_once(lv_task_t *lv_task_p);






void lv_task_reset(lv_task_t *lv_task_p);






void lv_task_enable(_Bool en);





uint8_t lv_task_get_idle(void);
# 21 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_hal/lv_hal.h" 1
# 16 "./include/display/lv_hal/lv_hal.h"
# 1 "./include/display/lv_hal/lv_hal_disp.h" 1
# 18 "./include/display/lv_hal/lv_hal_disp.h"
# 1 "./include/display/lv_misc/lv_color.h" 1
# 16 "./include/display/lv_misc/lv_color.h"
# 1 "./include/display/lv_conf.h" 1
# 17 "./include/display/lv_misc/lv_color.h" 2
# 60 "./include/display/lv_misc/lv_color.h"
typedef union {
  uint8_t blue : 1;
  uint8_t green : 1;
  uint8_t red : 1;
  uint8_t full : 1;
} lv_color1_t;

typedef union {
  struct {
    uint8_t blue : 2;
    uint8_t green : 3;
    uint8_t red : 3;
  };
  uint8_t full;
} lv_color8_t;

typedef union {
  struct {
    uint16_t blue : 5;
    uint16_t green : 6;
    uint16_t red : 5;
  };
  uint16_t full;
} lv_color16_t;

typedef union {
  struct {
    uint8_t blue;
    uint8_t green;
    uint8_t red;
    uint8_t alpha;
  };
  uint32_t full;
} lv_color24_t;
# 105 "./include/display/lv_misc/lv_color.h"
typedef uint32_t lv_color_int_t;
typedef lv_color24_t lv_color_t;




typedef uint8_t lv_opa_t;

typedef struct {
  uint16_t h;
  uint8_t s;
  uint8_t v;
} lv_color_hsv_t;
# 137 "./include/display/lv_misc/lv_color.h"
static inline uint8_t lv_color_to1(lv_color_t color) {
# 153 "./include/display/lv_misc/lv_color.h"
  if ((color.red & 0x80) || (color.green & 0x80) || (color.blue & 0x80)) {
    return 1;
  } else {
    return 0;
  }

}

static inline uint8_t lv_color_to8(lv_color_t color) {
# 176 "./include/display/lv_misc/lv_color.h"
  lv_color8_t ret;
  ret.red = color.red >> 5;
  ret.green = color.green >> 5;
  ret.blue = color.blue >> 6;
  return ret.full;

}

static inline uint16_t lv_color_to16(lv_color_t color) {
# 199 "./include/display/lv_misc/lv_color.h"
  lv_color16_t ret;
  ret.red = color.red >> 3;
  ret.green = color.green >> 2;
  ret.blue = color.blue >> 3;
  return ret.full;

}

static inline uint32_t lv_color_to24(lv_color_t color) {
# 228 "./include/display/lv_misc/lv_color.h"
  return color.full;

}

static inline lv_color_t lv_color_mix(lv_color_t c1, lv_color_t c2,
                                      uint8_t mix) {
  lv_color_t ret;

  ret.red = (uint16_t)((uint16_t)c1.red * mix + (c2.red * (255 - mix))) >> 8;
  ret.green =
      (uint16_t)((uint16_t)c1.green * mix + (c2.green * (255 - mix))) >> 8;
  ret.blue = (uint16_t)((uint16_t)c1.blue * mix + (c2.blue * (255 - mix))) >> 8;

  ret.alpha = 0xFF;





  return ret;
}






static inline uint8_t lv_color_brightness(lv_color_t color) {
  lv_color24_t c24;
  c24.full = lv_color_to24(color);
  uint16_t bright = 3 * c24.red + c24.blue + 4 * c24.green;
  return (uint16_t)bright >> 3;
}
# 306 "./include/display/lv_misc/lv_color.h"
lv_color_t lv_color_hsv_to_rgb(uint16_t h, uint8_t s, uint8_t v);
# 315 "./include/display/lv_misc/lv_color.h"
lv_color_hsv_t lv_color_rgb_to_hsv(uint8_t r, uint8_t g, uint8_t b);
# 19 "./include/display/lv_hal/lv_hal_disp.h" 2
# 1 "./include/display/lv_hal/lv_hal.h" 1
# 20 "./include/display/lv_hal/lv_hal_disp.h" 2
# 34 "./include/display/lv_hal/lv_hal_disp.h"
typedef struct _disp_drv_t {


  void (*disp_flush)(int32_t x1, int32_t y1, int32_t x2, int32_t y2,
                     const lv_color_t *color_p);


  void (*disp_fill)(int32_t x1, int32_t y1, int32_t x2, int32_t y2,
                    lv_color_t color);


  void (*disp_map)(int32_t x1, int32_t y1, int32_t x2, int32_t y2,
                   const lv_color_t *color_p);
# 57 "./include/display/lv_hal/lv_hal_disp.h"
} lv_disp_drv_t;

typedef struct _disp_t {
  lv_disp_drv_t driver;
  struct _disp_t *next;
} lv_disp_t;
# 74 "./include/display/lv_hal/lv_hal_disp.h"
void lv_disp_drv_init(lv_disp_drv_t *driver);
# 83 "./include/display/lv_hal/lv_hal_disp.h"
lv_disp_t *lv_disp_drv_register(lv_disp_drv_t *driver);





void lv_disp_set_active(lv_disp_t *disp);





lv_disp_t *lv_disp_get_active(void);







lv_disp_t *lv_disp_next(lv_disp_t *disp);
# 113 "./include/display/lv_hal/lv_hal_disp.h"
void lv_disp_flush(int32_t x1, int32_t y1, int32_t x2, int32_t y2,
                   lv_color_t *color_p);
# 124 "./include/display/lv_hal/lv_hal_disp.h"
void lv_disp_fill(int32_t x1, int32_t y1, int32_t x2, int32_t y2,
                  lv_color_t color);
# 135 "./include/display/lv_hal/lv_hal_disp.h"
void lv_disp_map(int32_t x1, int32_t y1, int32_t x2, int32_t y2,
                 const lv_color_t *color_map);
# 17 "./include/display/lv_hal/lv_hal.h" 2
# 1 "./include/display/lv_hal/lv_hal_indev.h" 1
# 18 "./include/display/lv_hal/lv_hal_indev.h"
# 1 "./include/display/lv_misc/lv_area.h" 1
# 18 "./include/display/lv_misc/lv_area.h"
# 1 "/usr/include/string.h" 1 3 4
# 64 "/usr/include/string.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 65 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/usr/include/string.h" 2 3 4




void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 142 "/usr/include/string.h" 2 3 4



errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 65 "/usr/include/strings.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 66 "/usr/include/strings.h" 2 3 4




int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 187 "/usr/include/string.h" 2 3 4
# 19 "./include/display/lv_misc/lv_area.h" 2
# 30 "./include/display/lv_misc/lv_area.h"
typedef int16_t lv_coord_t;

typedef struct {
  lv_coord_t x;
  lv_coord_t y;
} lv_point_t;

typedef struct {
  lv_coord_t x1;
  lv_coord_t y1;
  lv_coord_t x2;
  lv_coord_t y2;
} lv_area_t;
# 56 "./include/display/lv_misc/lv_area.h"
void lv_area_set(lv_area_t *area_p, lv_coord_t x1, lv_coord_t y1, lv_coord_t x2,
                 lv_coord_t y2);






inline static void lv_area_copy(lv_area_t *dest, const lv_area_t *src) {
  __builtin___memcpy_chk (dest, src, sizeof(lv_area_t), __builtin_object_size (dest, 0));
}






static inline lv_coord_t lv_area_get_width(const lv_area_t *area_p) {
  return area_p->x2 - area_p->x1 + 1;
}






static inline lv_coord_t lv_area_get_height(const lv_area_t *area_p) {
  return area_p->y2 - area_p->y1 + 1;
}






void lv_area_set_width(lv_area_t *area_p, lv_coord_t w);






void lv_area_set_height(lv_area_t *area_p, lv_coord_t h);







void lv_area_set_pos(lv_area_t *area_p, lv_coord_t x, lv_coord_t y);






uint32_t lv_area_get_size(const lv_area_t *area_p);
# 122 "./include/display/lv_misc/lv_area.h"
_Bool lv_area_union(lv_area_t *res_p, const lv_area_t *a1_p,
                   const lv_area_t *a2_p);







void lv_area_join(lv_area_t *a_res_p, const lv_area_t *a1_p,
                  const lv_area_t *a2_p);







_Bool lv_area_is_point_on(const lv_area_t *a_p, const lv_point_t *p_p);







_Bool lv_area_is_on(const lv_area_t *a1_p, const lv_area_t *a2_p);







_Bool lv_area_is_in(const lv_area_t *ain_p, const lv_area_t *aholder_p);
# 19 "./include/display/lv_hal/lv_hal_indev.h" 2
# 1 "./include/display/lv_hal/lv_hal.h" 1
# 20 "./include/display/lv_hal/lv_hal_indev.h" 2
# 32 "./include/display/lv_hal/lv_hal_indev.h"
typedef enum {
  LV_INDEV_TYPE_NONE,
  LV_INDEV_TYPE_POINTER,
  LV_INDEV_TYPE_KEYPAD,
  LV_INDEV_TYPE_BUTTON,

} lv_hal_indev_type_t;


typedef enum { LV_INDEV_STATE_REL = 0, LV_INDEV_STATE_PR } lv_indev_state_t;


typedef struct {
  union {
    lv_point_t point;
    uint32_t key;
    uint32_t btn;
  };
  lv_indev_state_t state;
  void *user_data;
} lv_indev_data_t;


typedef struct {
  lv_hal_indev_type_t type;
  _Bool (*read)(lv_indev_data_t *data);


  void *user_data;

} lv_indev_drv_t;

struct _lv_obj_t;


typedef struct _lv_indev_proc_t {
  lv_indev_state_t state;
  union {
    struct {
      lv_point_t act_point;
      lv_point_t last_point;
      lv_point_t vect;
      lv_point_t
          drag_sum;
      struct _lv_obj_t *act_obj;
      struct _lv_obj_t *last_obj;


      uint8_t drag_range_out : 1;
      uint8_t drag_in_prog : 1;
      uint8_t wait_unil_release : 1;
    };
    struct {
      lv_indev_state_t last_state;
      uint32_t last_key;
    };
  };

  uint32_t pr_timestamp;
  uint32_t longpr_rep_timestamp;


  uint8_t long_pr_sent : 1;
  uint8_t reset_query : 1;
  uint8_t disabled : 1;
} lv_indev_proc_t;

struct _lv_obj_t;
struct _lv_group_t;



typedef struct _lv_indev_t {
  lv_indev_drv_t driver;
  lv_indev_proc_t proc;
  uint32_t last_activity_time;
  union {
    struct _lv_obj_t *cursor;
    struct _lv_group_t *group;
    lv_point_t
        *btn_points;

  };
  struct _lv_indev_t *next;
} lv_indev_t;
# 128 "./include/display/lv_hal/lv_hal_indev.h"
void lv_indev_drv_init(lv_indev_drv_t *driver);







lv_indev_t *lv_indev_drv_register(lv_indev_drv_t *driver);







lv_indev_t *lv_indev_next(lv_indev_t *indev);







_Bool lv_indev_read(lv_indev_t *indev, lv_indev_data_t *data);
# 18 "./include/display/lv_hal/lv_hal.h" 2
# 1 "./include/display/lv_hal/lv_hal_tick.h" 1
# 38 "./include/display/lv_hal/lv_hal_tick.h"
                      void lv_tick_inc(uint32_t tick_period);





uint32_t lv_tick_get(void);






uint32_t lv_tick_elaps(uint32_t prev_tick);
# 19 "./include/display/lv_hal/lv_hal.h" 2
# 23 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_core/lv_group.h" 1
# 17 "./include/display/lv_core/lv_group.h"
# 1 "./include/display/lv_core/lv_obj.h" 1
# 21 "./include/display/lv_core/lv_obj.h"
# 1 "./include/display/lv_core/lv_style.h" 1
# 16 "./include/display/lv_core/lv_style.h"
# 1 "./include/display/lv_misc/lv_anim.h" 1
# 30 "./include/display/lv_misc/lv_anim.h"
struct _lv_anim_t;

typedef int32_t (*lv_anim_path_t)(const struct _lv_anim_t *);

typedef void (*lv_anim_fp_t)(void *, int32_t);
typedef void (*lv_anim_cb_t)(void *);

typedef struct _lv_anim_t {
  void *var;
  lv_anim_fp_t fp;
  lv_anim_cb_t end_cb;
  lv_anim_path_t path;
  int32_t start;
  int32_t end;
  int16_t time;
  int16_t
      act_time;
  uint16_t playback_pause;
  uint16_t repeat_pause;
  uint8_t playback : 1;
  uint8_t repeat : 1;

  uint8_t playback_now : 1;
} lv_anim_t;
# 77 "./include/display/lv_misc/lv_anim.h"
void lv_anim_init(void);





void lv_anim_create(lv_anim_t *anim_p);
# 92 "./include/display/lv_misc/lv_anim.h"
_Bool lv_anim_del(void *var, lv_anim_fp_t fp);
# 102 "./include/display/lv_misc/lv_anim.h"
uint16_t lv_anim_speed_to_time(uint16_t speed, int32_t start, int32_t end);






int32_t lv_anim_path_linear(const lv_anim_t *a);







int32_t lv_anim_path_step(const lv_anim_t *a);
# 17 "./include/display/lv_core/lv_style.h" 2


# 1 "./include/display/lv_misc/lv_font.h" 1
# 18 "./include/display/lv_misc/lv_font.h"
# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 1 3 4
# 19 "./include/display/lv_misc/lv_font.h" 2


# 1 "./include/display/lv_misc/lv_fonts/lv_symbol_def.h" 1
# 22 "./include/display/lv_misc/lv_font.h" 2
# 31 "./include/display/lv_misc/lv_font.h"
typedef struct {
  uint32_t w_px : 8;
  uint32_t glyph_index : 24;
} lv_font_glyph_dsc_t;

typedef struct {
  uint32_t unicode : 21;
  uint32_t glyph_dsc_index : 11;
} lv_font_unicode_map_t;

typedef struct _lv_font_struct {
  uint32_t unicode_first;
  uint32_t unicode_last;
  uint8_t h_px;
  const uint8_t *glyph_bitmap;
  const lv_font_glyph_dsc_t *glyph_dsc;
  const uint32_t *unicode_list;
  const uint8_t *(*get_bitmap)(const struct _lv_font_struct *,
                               uint32_t);
  const int16_t (*get_width)(const struct _lv_font_struct *,
                             uint32_t);
  struct _lv_font_struct *next_page;
  uint32_t bpp : 4;
} lv_font_t;
# 63 "./include/display/lv_misc/lv_font.h"
void lv_font_init(void);







void lv_font_add(lv_font_t *child, lv_font_t *parent);







const uint8_t *lv_font_get_bitmap(const lv_font_t *font_p, uint32_t letter);






static inline uint8_t lv_font_get_height(const lv_font_t *font_p) {
  return font_p->h_px;
}







uint8_t lv_font_get_width(const lv_font_t *font_p, uint32_t letter);







uint8_t lv_font_get_bpp(const lv_font_t *font, uint32_t letter);
# 113 "./include/display/lv_misc/lv_font.h"
const uint8_t *lv_font_get_bitmap_continuous(const lv_font_t *font,
                                             uint32_t unicode_letter);
# 123 "./include/display/lv_misc/lv_font.h"
const uint8_t *lv_font_get_bitmap_sparse(const lv_font_t *font,
                                         uint32_t unicode_letter);







const int16_t lv_font_get_width_continuous(const lv_font_t *font,
                                           uint32_t unicode_letter);
# 142 "./include/display/lv_misc/lv_font.h"
const int16_t lv_font_get_width_sparse(const lv_font_t *font,
                                       uint32_t unicode_letter);
# 173 "./include/display/lv_misc/lv_font.h"
extern lv_font_t lv_font_dejavu_20;



extern lv_font_t lv_font_dejavu_20_latin_sup;



extern lv_font_t lv_font_dejavu_20_cyrillic;



extern lv_font_t lv_font_symbol_20;
# 225 "./include/display/lv_misc/lv_font.h"
extern lv_font_t pros_font_dejavu_mono_20;
# 20 "./include/display/lv_core/lv_style.h" 2
# 33 "./include/display/lv_core/lv_style.h"
typedef enum {
  LV_BORDER_NONE = 0x00,
  LV_BORDER_BOTTOM = 0x01,
  LV_BORDER_TOP = 0x02,
  LV_BORDER_LEFT = 0x04,
  LV_BORDER_RIGHT = 0x08,
  LV_BORDER_FULL = 0x0F,
} lv_border_part_t;


typedef enum {
  LV_SHADOW_BOTTOM = 0,
  LV_SHADOW_FULL,
} lv_shadow_type_t;

typedef struct {
  uint8_t glass : 1;

  struct {
    lv_color_t main_color;
    lv_color_t grad_color;
    lv_coord_t radius;
    lv_opa_t opa;

    struct {
      lv_color_t color;
      lv_coord_t width;
      lv_border_part_t part;
      lv_opa_t opa;
    } border;

    struct {
      lv_color_t color;
      lv_coord_t width;
      uint8_t type;
    } shadow;

    struct {
      lv_coord_t ver;
      lv_coord_t hor;
      lv_coord_t inner;
    } padding;

    uint8_t empty : 1;
  } body;

  struct {
    lv_color_t color;
    const lv_font_t *font;
    lv_coord_t letter_space;
    lv_coord_t line_space;
    lv_opa_t opa;
  } text;

  struct {
    lv_color_t color;
    lv_opa_t intense;
    lv_opa_t opa;
  } image;

  struct {
    lv_color_t color;
    lv_coord_t width;
    lv_opa_t opa;
  } line;
} lv_style_t;


typedef struct {
  const lv_style_t *style_start;
  const lv_style_t *style_end;
  lv_style_t *style_anim;
  lv_anim_cb_t end_cb;
  int16_t time;
  int16_t
      act_time;
  uint16_t playback_pause;
  uint16_t repeat_pause;
  uint8_t playback : 1;
  uint8_t repeat : 1;
} lv_style_anim_t;
# 138 "./include/display/lv_core/lv_style.h"
void lv_style_init(void);






void lv_style_copy(lv_style_t *dest, const lv_style_t *src);







void lv_style_anim_create(lv_style_anim_t *anim);





extern lv_style_t lv_style_scr;
extern lv_style_t lv_style_transp;
extern lv_style_t lv_style_transp_fit;
extern lv_style_t lv_style_transp_tight;
extern lv_style_t lv_style_plain;
extern lv_style_t lv_style_plain_color;
extern lv_style_t lv_style_pretty;
extern lv_style_t lv_style_pretty_color;
extern lv_style_t lv_style_btn_rel;
extern lv_style_t lv_style_btn_pr;
extern lv_style_t lv_style_btn_tgl_rel;
extern lv_style_t lv_style_btn_tgl_pr;
extern lv_style_t lv_style_btn_ina;
# 22 "./include/display/lv_core/lv_obj.h" 2

# 1 "/Library/Developer/CommandLineTools/usr/bin/../lib/clang/8.0.0/include/stddef.h" 1 3 4
# 24 "./include/display/lv_core/lv_obj.h" 2
# 63 "./include/display/lv_core/lv_obj.h"
struct _lv_obj_t;

typedef enum {
  LV_DESIGN_DRAW_MAIN,
  LV_DESIGN_DRAW_POST,
  LV_DESIGN_COVER_CHK,
} lv_design_mode_t;

typedef _Bool (*lv_design_func_t)(struct _lv_obj_t *obj, const lv_area_t *mask_p,
                                 lv_design_mode_t mode);

typedef enum {
  LV_RES_INV = 0,

  LV_RES_OK,
} lv_res_t;

typedef enum {

  LV_SIGNAL_CLEANUP,
  LV_SIGNAL_CHILD_CHG,
  LV_SIGNAL_CORD_CHG,
  LV_SIGNAL_STYLE_CHG,
  LV_SIGNAL_REFR_EXT_SIZE,
  LV_SIGNAL_GET_TYPE,


  LV_SIGNAL_PRESSED,
  LV_SIGNAL_PRESSING,
  LV_SIGNAL_PRESS_LOST,
  LV_SIGNAL_RELEASED,
  LV_SIGNAL_LONG_PRESS,
  LV_SIGNAL_LONG_PRESS_REP,
  LV_SIGNAL_DRAG_BEGIN,
  LV_SIGNAL_DRAG_END,


  LV_SIGNAL_FOCUS,
  LV_SIGNAL_DEFOCUS,
  LV_SIGNAL_CONTROLL,
} lv_signal_t;

typedef lv_res_t (*lv_signal_func_t)(struct _lv_obj_t *obj, lv_signal_t sign,
                                     void *param);

typedef struct _lv_obj_t {
  struct _lv_obj_t *par;
  lv_ll_t child_ll;

  lv_area_t coords;

  lv_signal_func_t signal_func;
  lv_design_func_t design_func;

  void *ext_attr;
  lv_style_t *style_p;


  void *free_ptr;



  void *group_p;


  uint8_t click : 1;
  uint8_t drag : 1;
  uint8_t drag_throw : 1;
  uint8_t drag_parent : 1;
  uint8_t hidden : 1;
  uint8_t top : 1;

  uint8_t reserved : 1;

  uint8_t protect;


  lv_coord_t
      ext_size;



  uint32_t
  free_num;

} lv_obj_t;

typedef lv_res_t (*lv_action_t)(struct _lv_obj_t *obj);


typedef enum {
  LV_PROTECT_NONE = 0x00,
  LV_PROTECT_CHILD_CHG =
      0x01,
  LV_PROTECT_PARENT =
      0x02,
  LV_PROTECT_POS =
      0x04,
  LV_PROTECT_FOLLOW = 0x08,

  LV_PROTECT_PRESS_LOST = 0x10,
} lv_protect_t;



typedef struct {
  const char
      *type[8];

} lv_obj_type_t;

typedef enum {
  LV_ALIGN_CENTER = 0,
  LV_ALIGN_IN_TOP_LEFT,
  LV_ALIGN_IN_TOP_MID,
  LV_ALIGN_IN_TOP_RIGHT,
  LV_ALIGN_IN_BOTTOM_LEFT,
  LV_ALIGN_IN_BOTTOM_MID,
  LV_ALIGN_IN_BOTTOM_RIGHT,
  LV_ALIGN_IN_LEFT_MID,
  LV_ALIGN_IN_RIGHT_MID,
  LV_ALIGN_OUT_TOP_LEFT,
  LV_ALIGN_OUT_TOP_MID,
  LV_ALIGN_OUT_TOP_RIGHT,
  LV_ALIGN_OUT_BOTTOM_LEFT,
  LV_ALIGN_OUT_BOTTOM_MID,
  LV_ALIGN_OUT_BOTTOM_RIGHT,
  LV_ALIGN_OUT_LEFT_TOP,
  LV_ALIGN_OUT_LEFT_MID,
  LV_ALIGN_OUT_LEFT_BOTTOM,
  LV_ALIGN_OUT_RIGHT_TOP,
  LV_ALIGN_OUT_RIGHT_MID,
  LV_ALIGN_OUT_RIGHT_BOTTOM,
} lv_align_t;

typedef enum {
  LV_ANIM_NONE = 0,
  LV_ANIM_FLOAT_TOP,
  LV_ANIM_FLOAT_LEFT,
  LV_ANIM_FLOAT_BOTTOM,
  LV_ANIM_FLOAT_RIGHT,
  LV_ANIM_GROW_H,
  LV_ANIM_GROW_V,
} lv_anim_builtin_t;
# 215 "./include/display/lv_core/lv_obj.h"
void lv_init(void);
# 229 "./include/display/lv_core/lv_obj.h"
lv_obj_t *lv_obj_create(lv_obj_t *parent, lv_obj_t *copy);






lv_res_t lv_obj_del(lv_obj_t *obj);





void lv_obj_clean(lv_obj_t *obj);






void lv_obj_invalidate(lv_obj_t *obj);
# 263 "./include/display/lv_core/lv_obj.h"
void lv_scr_load(lv_obj_t *scr);
# 274 "./include/display/lv_core/lv_obj.h"
void lv_obj_set_parent(lv_obj_t *obj, lv_obj_t *parent);
# 286 "./include/display/lv_core/lv_obj.h"
void lv_obj_set_pos(lv_obj_t *obj, lv_coord_t x, lv_coord_t y);






void lv_obj_set_x(lv_obj_t *obj, lv_coord_t x);






void lv_obj_set_y(lv_obj_t *obj, lv_coord_t y);







void lv_obj_set_size(lv_obj_t *obj, lv_coord_t w, lv_coord_t h);






void lv_obj_set_width(lv_obj_t *obj, lv_coord_t w);






void lv_obj_set_height(lv_obj_t *obj, lv_coord_t h);
# 333 "./include/display/lv_core/lv_obj.h"
void lv_obj_align(lv_obj_t *obj, lv_obj_t *base, lv_align_t align,
                  lv_coord_t x_mod, lv_coord_t y_mod);
# 345 "./include/display/lv_core/lv_obj.h"
void lv_obj_set_style(lv_obj_t *obj, lv_style_t *style);





void lv_obj_refresh_style(lv_obj_t *obj);







void lv_obj_report_style_mod(lv_style_t *style);
# 370 "./include/display/lv_core/lv_obj.h"
void lv_obj_set_hidden(lv_obj_t *obj, _Bool en);






void lv_obj_set_click(lv_obj_t *obj, _Bool en);







void lv_obj_set_top(lv_obj_t *obj, _Bool en);






void lv_obj_set_drag(lv_obj_t *obj, _Bool en);






void lv_obj_set_drag_throw(lv_obj_t *obj, _Bool en);







void lv_obj_set_drag_parent(lv_obj_t *obj, _Bool en);






void lv_obj_set_protect(lv_obj_t *obj, uint8_t prot);






void lv_obj_clear_protect(lv_obj_t *obj, uint8_t prot);







void lv_obj_set_signal_func(lv_obj_t *obj, lv_signal_func_t fp);






void lv_obj_set_design_func(lv_obj_t *obj, lv_design_func_t fp);
# 448 "./include/display/lv_core/lv_obj.h"
void *lv_obj_allocate_ext_attr(lv_obj_t *obj, uint16_t ext_size);





void lv_obj_refresh_ext_size(lv_obj_t *obj);
# 463 "./include/display/lv_core/lv_obj.h"
void lv_obj_set_free_num(lv_obj_t *obj, uint32_t free_num);
# 473 "./include/display/lv_core/lv_obj.h"
void lv_obj_set_free_ptr(lv_obj_t *obj, void *free_p);
# 486 "./include/display/lv_core/lv_obj.h"
void lv_obj_animate(lv_obj_t *obj, lv_anim_builtin_t type, uint16_t time,
                    uint16_t delay, void (*cb)(lv_obj_t *));
# 502 "./include/display/lv_core/lv_obj.h"
lv_obj_t *lv_scr_act(void);






lv_obj_t *lv_layer_top(void);







lv_obj_t *lv_layer_sys(void);






lv_obj_t *lv_obj_get_screen(lv_obj_t *obj);
# 535 "./include/display/lv_core/lv_obj.h"
lv_obj_t *lv_obj_get_parent(lv_obj_t *obj);
# 545 "./include/display/lv_core/lv_obj.h"
lv_obj_t *lv_obj_get_child(lv_obj_t *obj, lv_obj_t *child);
# 555 "./include/display/lv_core/lv_obj.h"
lv_obj_t *lv_obj_get_child_back(lv_obj_t *obj, lv_obj_t *child);






uint16_t lv_obj_count_children(lv_obj_t *obj);
# 573 "./include/display/lv_core/lv_obj.h"
void lv_obj_get_coords(lv_obj_t *obj, lv_area_t *cords_p);






lv_coord_t lv_obj_get_x(lv_obj_t *obj);






lv_coord_t lv_obj_get_y(lv_obj_t *obj);






lv_coord_t lv_obj_get_width(lv_obj_t *obj);






lv_coord_t lv_obj_get_height(lv_obj_t *obj);






lv_coord_t lv_obj_get_ext_size(lv_obj_t *obj);
# 619 "./include/display/lv_core/lv_obj.h"
lv_style_t *lv_obj_get_style(lv_obj_t *obj);
# 630 "./include/display/lv_core/lv_obj.h"
_Bool lv_obj_get_hidden(lv_obj_t *obj);






_Bool lv_obj_get_click(lv_obj_t *obj);






_Bool lv_obj_get_top(lv_obj_t *obj);






_Bool lv_obj_get_drag(lv_obj_t *obj);






_Bool lv_obj_get_drag_throw(lv_obj_t *obj);






_Bool lv_obj_get_drag_parent(lv_obj_t *obj);






uint8_t lv_obj_get_protect(lv_obj_t *obj);







_Bool lv_obj_is_protected(lv_obj_t *obj, uint8_t prot);






lv_signal_func_t lv_obj_get_signal_func(lv_obj_t *obj);






lv_design_func_t lv_obj_get_design_func(lv_obj_t *obj);
# 706 "./include/display/lv_core/lv_obj.h"
void *lv_obj_get_ext_attr(lv_obj_t *obj);
# 715 "./include/display/lv_core/lv_obj.h"
void lv_obj_get_type(lv_obj_t *obj, lv_obj_type_t *buf);







uint32_t lv_obj_get_free_num(lv_obj_t *obj);
# 732 "./include/display/lv_core/lv_obj.h"
void *lv_obj_get_free_ptr(lv_obj_t *obj);
# 741 "./include/display/lv_core/lv_obj.h"
void *lv_obj_get_group(lv_obj_t *obj);
# 18 "./include/display/lv_core/lv_group.h" 2
# 40 "./include/display/lv_core/lv_group.h"
struct _lv_group_t;

typedef void (*lv_group_style_mod_func_t)(lv_style_t *);
typedef void (*lv_group_focus_cb_t)(struct _lv_group_t *);

typedef struct _lv_group_t {
  lv_ll_t obj_ll;
  lv_obj_t **obj_focus;
  lv_group_style_mod_func_t
      style_mod;
  lv_group_focus_cb_t
      focus_cb;
  lv_style_t style_tmp;
  uint8_t frozen : 1;
} lv_group_t;
# 64 "./include/display/lv_core/lv_group.h"
lv_group_t *lv_group_create(void);






void lv_group_add_obj(lv_group_t *group, lv_obj_t *obj);





void lv_group_remove_obj(lv_obj_t *obj);





void lv_group_focus_obj(lv_obj_t *obj);





void lv_group_focus_next(lv_group_t *group);





void lv_group_focus_prev(lv_group_t *group);






void lv_group_focus_freeze(lv_group_t *group, _Bool en);






void lv_group_send_data(lv_group_t *group, uint32_t c);







void lv_group_set_style_mod_cb(lv_group_t *group,
                               lv_group_style_mod_func_t style_mod_func);






void lv_group_set_focus_cb(lv_group_t *group, lv_group_focus_cb_t focus_cb);
# 134 "./include/display/lv_core/lv_group.h"
lv_style_t *lv_group_mod_style(lv_group_t *group, const lv_style_t *style);






lv_obj_t *lv_group_get_focused(lv_group_t *group);






lv_group_style_mod_func_t lv_group_get_style_mod_cb(lv_group_t *group);






lv_group_focus_cb_t lv_group_get_focus_cb(lv_group_t *group);
# 25 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_core/lv_vdb.h" 1
# 31 "./include/display/lv_core/lv_vdb.h"
typedef struct {
  lv_area_t area;
  lv_color_t *buf;
} lv_vdb_t;
# 44 "./include/display/lv_core/lv_vdb.h"
lv_vdb_t *lv_vdb_get(void);




void lv_vdb_flush(void);





void lv_flush_ready(void);
# 27 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_themes/lv_theme.h" 1
# 27 "./include/display/lv_themes/lv_theme.h"
typedef struct {
  lv_style_t *bg;
  lv_style_t *panel;


  lv_style_t *cont;


  struct {
    lv_style_t *rel;
    lv_style_t *pr;
    lv_style_t *tgl_rel;
    lv_style_t *tgl_pr;
    lv_style_t *ina;
  } btn;



  struct {
    lv_style_t *prim;
    lv_style_t *sec;
    lv_style_t *hint;
  } label;



  struct {
    lv_style_t *light;
    lv_style_t *dark;
  } img;



  struct {
    lv_style_t *decor;
  } line;



  lv_style_t *led;



  struct {
    lv_style_t *bg;
    lv_style_t *indic;
  } bar;



  struct {
    lv_style_t *bg;
    lv_style_t *indic;
    lv_style_t *knob;
  } slider;



  lv_style_t *lmeter;



  lv_style_t *gauge;



  struct {
    lv_style_t *bg;
    lv_style_t *indic;
    lv_style_t *knob_off;
    lv_style_t *knob_on;
  } sw;



  lv_style_t *chart;



  struct {
    lv_style_t *bg;
    struct {
      lv_style_t *rel;
      lv_style_t *pr;
      lv_style_t *tgl_rel;
      lv_style_t *tgl_pr;
      lv_style_t *ina;
    } box;
  } cb;



  struct {
    lv_style_t *bg;
    struct {
      lv_style_t *rel;
      lv_style_t *pr;
      lv_style_t *tgl_rel;
      lv_style_t *tgl_pr;
      lv_style_t *ina;
    } btn;
  } btnm;
# 145 "./include/display/lv_themes/lv_theme.h"
  struct {
    lv_style_t *bg;
    struct {
      lv_style_t *bg;
      lv_style_t *rel;
      lv_style_t *pr;
    } btn;
  } mbox;



  struct {
    lv_style_t *bg;
    lv_style_t *scrl;
    lv_style_t *sb;
  } page;



  struct {
    lv_style_t *area;
    lv_style_t *oneline;
    lv_style_t *cursor;
    lv_style_t *sb;
  } ta;



  struct {
    lv_style_t *bg;
    lv_style_t *scrl;
    lv_style_t *sb;
    struct {
      lv_style_t *rel;
      lv_style_t *pr;
      lv_style_t *tgl_rel;
      lv_style_t *tgl_pr;
      lv_style_t *ina;
    } btn;
  } list;



  struct {
    lv_style_t *bg;
    lv_style_t *sel;
    lv_style_t *sb;
  } ddlist;



  struct {
    lv_style_t *bg;
    lv_style_t *sel;
  } roller;



  struct {
    lv_style_t *bg;
    lv_style_t *indic;
    struct {
      lv_style_t *bg;
      lv_style_t *rel;
      lv_style_t *pr;
      lv_style_t *tgl_rel;
      lv_style_t *tgl_pr;
    } btn;
  } tabview;



  struct {
    lv_style_t *bg;
    lv_style_t *sb;
    lv_style_t *header;
    struct {
      lv_style_t *bg;
      lv_style_t *scrl;
    } content;
    struct {
      lv_style_t *rel;
      lv_style_t *pr;
    } btn;
  } win;

} lv_theme_t;
# 242 "./include/display/lv_themes/lv_theme.h"
void lv_theme_set_current(lv_theme_t *th);





lv_theme_t *lv_theme_get_current(void);
# 259 "./include/display/lv_themes/lv_theme.h"
# 1 "./include/display/lv_themes/lv_theme_alien.h" 1
# 39 "./include/display/lv_themes/lv_theme_alien.h"
lv_theme_t *lv_theme_alien_init(uint16_t hue, lv_font_t *font);




lv_theme_t *lv_theme_get_alien(void);
# 260 "./include/display/lv_themes/lv_theme.h" 2
# 29 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_objx/lv_bar.h" 1
# 20 "./include/display/lv_objx/lv_bar.h"
# 1 "./include/display/lv_objx/lv_btn.h" 1
# 24 "./include/display/lv_objx/lv_btn.h"
# 1 "./include/display/lv_core/lv_indev.h" 1
# 35 "./include/display/lv_core/lv_indev.h"
void lv_indev_init(void);







lv_indev_t *lv_indev_get_act(void);





void lv_indev_reset(lv_indev_t *indev);





void lv_indev_reset_lpr(lv_indev_t *indev);






void lv_indev_enable(lv_hal_indev_type_t type, _Bool enable);







void lv_indev_set_cursor(lv_indev_t *indev, lv_obj_t *cur_obj);







void lv_indev_set_group(lv_indev_t *indev, lv_group_t *group);
# 88 "./include/display/lv_core/lv_indev.h"
void lv_indev_set_button_points(lv_indev_t *indev, lv_point_t *points);







void lv_indev_get_point(lv_indev_t *indev, lv_point_t *point);







_Bool lv_indev_is_dragging(lv_indev_t *indev);







void lv_indev_get_vect(lv_indev_t *indev, lv_point_t *point);






uint32_t lv_indev_get_inactive_time(lv_indev_t *indev);





void lv_indev_wait_release(lv_indev_t *indev);
# 25 "./include/display/lv_objx/lv_btn.h" 2
# 1 "./include/display/lv_objx/lv_cont.h" 1
# 30 "./include/display/lv_objx/lv_cont.h"
typedef enum {
  LV_LAYOUT_OFF = 0,
  LV_LAYOUT_CENTER,
  LV_LAYOUT_COL_L,
  LV_LAYOUT_COL_M,
  LV_LAYOUT_COL_R,
  LV_LAYOUT_ROW_T,
  LV_LAYOUT_ROW_M,
  LV_LAYOUT_ROW_B,
  LV_LAYOUT_PRETTY,

  LV_LAYOUT_GRID,
} lv_layout_t;

typedef struct {


  uint8_t layout : 4;
  uint8_t hor_fit : 1;
  uint8_t ver_fit : 1;
} lv_cont_ext_t;
# 63 "./include/display/lv_objx/lv_cont.h"
lv_obj_t *lv_cont_create(lv_obj_t *par, lv_obj_t *copy);
# 74 "./include/display/lv_objx/lv_cont.h"
void lv_cont_set_layout(lv_obj_t *cont, lv_layout_t layout);
# 84 "./include/display/lv_objx/lv_cont.h"
void lv_cont_set_fit(lv_obj_t *cont, _Bool hor_en, _Bool ver_en);






static inline void lv_cont_set_style(lv_obj_t *cont, lv_style_t *style) {
  lv_obj_set_style(cont, style);
}
# 104 "./include/display/lv_objx/lv_cont.h"
lv_layout_t lv_cont_get_layout(lv_obj_t *cont);






_Bool lv_cont_get_hor_fit(lv_obj_t *cont);






_Bool lv_cont_get_ver_fit(lv_obj_t *cont);






static inline lv_style_t *lv_cont_get_style(lv_obj_t *cont) {
  return lv_obj_get_style(cont);
}
# 26 "./include/display/lv_objx/lv_btn.h" 2
# 36 "./include/display/lv_objx/lv_btn.h"
typedef enum {
  LV_BTN_STATE_REL,
  LV_BTN_STATE_PR,
  LV_BTN_STATE_TGL_REL,
  LV_BTN_STATE_TGL_PR,
  LV_BTN_STATE_INA,
  LV_BTN_STATE_NUM,
} lv_btn_state_t;

typedef enum {
  LV_BTN_ACTION_CLICK,
  LV_BTN_ACTION_PR,
  LV_BTN_ACTION_LONG_PR,
  LV_BTN_ACTION_LONG_PR_REPEAT,
  LV_BTN_ACTION_NUM,
} lv_btn_action_t;


typedef struct {
  lv_cont_ext_t cont;

  lv_action_t actions[LV_BTN_ACTION_NUM];
  lv_style_t *styles[LV_BTN_STATE_NUM];

  lv_btn_state_t
      state;
  uint8_t toggle : 1;
  uint8_t
      long_pr_action_executed : 1;

} lv_btn_ext_t;


typedef enum {
  LV_BTN_STYLE_REL,
  LV_BTN_STYLE_PR,
  LV_BTN_STYLE_TGL_REL,
  LV_BTN_STYLE_TGL_PR,
  LV_BTN_STYLE_INA,
} lv_btn_style_t;
# 88 "./include/display/lv_objx/lv_btn.h"
lv_obj_t *lv_btn_create(lv_obj_t *par, lv_obj_t *copy);
# 100 "./include/display/lv_objx/lv_btn.h"
void lv_btn_set_toggle(lv_obj_t *btn, _Bool tgl);






void lv_btn_set_state(lv_obj_t *btn, lv_btn_state_t state);





void lv_btn_toggle(lv_obj_t *btn);







void lv_btn_set_action(lv_obj_t *btn, lv_btn_action_t type, lv_action_t action);






static inline void lv_btn_set_layout(lv_obj_t *btn, lv_layout_t layout) {
  lv_cont_set_layout(btn, layout);
}
# 140 "./include/display/lv_objx/lv_btn.h"
static inline void lv_btn_set_fit(lv_obj_t *btn, _Bool hor_en, _Bool ver_en) {
  lv_cont_set_fit(btn, hor_en, ver_en);
}







void lv_btn_set_style(lv_obj_t *btn, lv_btn_style_t type, lv_style_t *style);
# 161 "./include/display/lv_objx/lv_btn.h"
lv_btn_state_t lv_btn_get_state(lv_obj_t *btn);






_Bool lv_btn_get_toggle(lv_obj_t *btn);






lv_action_t lv_btn_get_action(lv_obj_t *btn, lv_btn_action_t type);






static inline lv_layout_t lv_btn_get_layout(lv_obj_t *btn) {
  return lv_cont_get_layout(btn);
}






static inline _Bool lv_btn_get_hor_fit(lv_obj_t *btn) {
  return lv_cont_get_hor_fit(btn);
}






static inline _Bool lv_btn_get_ver_fit(lv_obj_t *btn) {
  return lv_cont_get_ver_fit(btn);
}







lv_style_t *lv_btn_get_style(lv_obj_t *btn, lv_btn_style_t type);
# 21 "./include/display/lv_objx/lv_bar.h" 2

# 1 "./include/display/lv_objx/lv_label.h" 1
# 22 "./include/display/lv_objx/lv_label.h"
# 1 "./include/display/lv_misc/lv_txt.h" 1
# 29 "./include/display/lv_misc/lv_txt.h"
typedef enum
{
    LV_TXT_FLAG_NONE = 0x00,
    LV_TXT_FLAG_RECOLOR = 0x01,
    LV_TXT_FLAG_EXPAND = 0x02,
    LV_TXT_FLAG_NO_BREAK = 0x04,
    LV_TXT_FLAG_CENTER = 0x08,
}lv_txt_flag_t;

typedef enum
{
    LV_TXT_CMD_STATE_WAIT,
    LV_TXT_CMD_STATE_PAR,
    LV_TXT_CMD_STATE_IN,
}lv_txt_cmd_state_t;
# 59 "./include/display/lv_misc/lv_txt.h"
void lv_txt_get_size(lv_point_t * size_res, const char * text, const lv_font_t * font,
                    lv_coord_t letter_space, lv_coord_t line_space, lv_coord_t max_width, lv_txt_flag_t flag);
# 71 "./include/display/lv_misc/lv_txt.h"
uint16_t lv_txt_get_next_line(const char * txt, const lv_font_t * font_p,
                            lv_coord_t letter_space, lv_coord_t max_l, lv_txt_flag_t flag);
# 83 "./include/display/lv_misc/lv_txt.h"
lv_coord_t lv_txt_get_width(const char * txt, uint16_t char_num,
                    const lv_font_t * font_p, lv_coord_t letter_space, lv_txt_flag_t flag);
# 93 "./include/display/lv_misc/lv_txt.h"
_Bool lv_txt_is_cmd(lv_txt_cmd_state_t * state, uint32_t c);







void lv_txt_ins(char * txt_buf, uint32_t pos, const char * ins_txt);







void lv_txt_cut(char * txt, uint32_t pos, uint32_t len);






uint8_t lv_txt_utf8_size(uint8_t c);







uint32_t lv_txt_unicode_to_utf8(uint32_t letter_uni);
# 134 "./include/display/lv_misc/lv_txt.h"
uint32_t lv_txt_utf8_next(const char * txt, uint32_t * i);







uint32_t lv_txt_utf8_prev(const char * txt, uint32_t * i_start);
# 151 "./include/display/lv_misc/lv_txt.h"
uint32_t txt_utf8_get_byte_id(const char * txt, uint32_t utf8_id);
# 160 "./include/display/lv_misc/lv_txt.h"
uint32_t lv_txt_utf8_get_char_id(const char * txt, uint32_t byte_id);







uint32_t lv_txt_get_length(const char * txt);
# 23 "./include/display/lv_objx/lv_label.h" 2
# 35 "./include/display/lv_objx/lv_label.h"
typedef enum {
  LV_LABEL_LONG_EXPAND,
  LV_LABEL_LONG_BREAK,

  LV_LABEL_LONG_SCROLL,

  LV_LABEL_LONG_DOT,

  LV_LABEL_LONG_ROLL,
} lv_label_long_mode_t;


typedef enum {
  LV_LABEL_ALIGN_LEFT,
  LV_LABEL_ALIGN_CENTER,
} lv_label_align_t;


typedef struct {


  char *text;
  lv_label_long_mode_t long_mode;




  char dot_tmp[3 * 4 + 1];



  uint16_t
      dot_end;
  uint16_t anim_speed;
  lv_point_t offset;
  uint8_t static_txt : 1;
  uint8_t align : 2;
  uint8_t recolor : 1;
  uint8_t expand : 1;

  uint8_t no_break : 1;
  uint8_t body_draw : 1;
} lv_label_ext_t;
# 90 "./include/display/lv_objx/lv_label.h"
lv_obj_t *lv_label_create(lv_obj_t *par, lv_obj_t *copy);
# 103 "./include/display/lv_objx/lv_label.h"
void lv_label_set_text(lv_obj_t *label, const char *text);
# 113 "./include/display/lv_objx/lv_label.h"
void lv_label_set_array_text(lv_obj_t *label, const char *array, uint16_t size);







void lv_label_set_static_text(lv_obj_t *label, const char *text);






void lv_label_set_long_mode(lv_obj_t *label, lv_label_long_mode_t long_mode);






void lv_label_set_align(lv_obj_t *label, lv_label_align_t align);






void lv_label_set_recolor(lv_obj_t *label, _Bool recolor_en);






void lv_label_set_no_break(lv_obj_t *label, _Bool no_break_en);






void lv_label_set_body_draw(lv_obj_t *label, _Bool body_en);






void lv_label_set_anim_speed(lv_obj_t *label, uint16_t anim_speed);






static inline void lv_label_set_style(lv_obj_t *label, lv_style_t *style) {
  lv_obj_set_style(label, style);
}
# 182 "./include/display/lv_objx/lv_label.h"
char *lv_label_get_text(lv_obj_t *label);






lv_label_long_mode_t lv_label_get_long_mode(lv_obj_t *label);






lv_label_align_t lv_label_get_align(lv_obj_t *label);






_Bool lv_label_get_recolor(lv_obj_t *label);







_Bool lv_label_get_no_break(lv_obj_t *label);





_Bool lv_label_get_body_draw(lv_obj_t *label);






uint16_t lv_label_get_anim_speed(lv_obj_t *label);
# 233 "./include/display/lv_objx/lv_label.h"
void lv_label_get_letter_pos(lv_obj_t *label, uint16_t index, lv_point_t *pos);
# 243 "./include/display/lv_objx/lv_label.h"
uint16_t lv_label_get_letter_on(lv_obj_t *label, lv_point_t *pos);






static inline lv_style_t *lv_label_get_style(lv_obj_t *label) {
  return lv_obj_get_style(label);
}
# 267 "./include/display/lv_objx/lv_label.h"
void lv_label_ins_text(lv_obj_t *label, uint32_t pos, const char *txt);
# 277 "./include/display/lv_objx/lv_label.h"
void lv_label_cut_text(lv_obj_t *label, uint32_t pos, uint32_t cnt);
# 23 "./include/display/lv_objx/lv_bar.h" 2
# 33 "./include/display/lv_objx/lv_bar.h"
typedef struct {


  int16_t cur_value;
  int16_t min_value;
  int16_t max_value;
  lv_style_t *style_indic;
} lv_bar_ext_t;

typedef enum {
  LV_BAR_STYLE_BG,
  LV_BAR_STYLE_INDIC,
} lv_bar_style_t;
# 58 "./include/display/lv_objx/lv_bar.h"
lv_obj_t *lv_bar_create(lv_obj_t *par, lv_obj_t *copy);
# 69 "./include/display/lv_objx/lv_bar.h"
void lv_bar_set_value(lv_obj_t *bar, int16_t value);







void lv_bar_set_value_anim(lv_obj_t *bar, int16_t value, uint16_t anim_time);







void lv_bar_set_range(lv_obj_t *bar, int16_t min, int16_t max);







void lv_bar_set_style(lv_obj_t *bar, lv_bar_style_t type, lv_style_t *style);
# 104 "./include/display/lv_objx/lv_bar.h"
int16_t lv_bar_get_value(lv_obj_t *bar);






int16_t lv_bar_get_min_value(lv_obj_t *bar);






int16_t lv_bar_get_max_value(lv_obj_t *bar);







lv_style_t *lv_bar_get_style(lv_obj_t *bar, lv_bar_style_t type);
# 31 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_objx/lv_btnm.h" 1
# 45 "./include/display/lv_objx/lv_btnm.h"
typedef lv_res_t (*lv_btnm_action_t)(lv_obj_t *, const char *txt);


typedef struct {


  const char **map_p;
  lv_area_t *button_areas;
  lv_btnm_action_t action;
  lv_style_t *styles_btn[LV_BTN_STATE_NUM];
  uint16_t btn_cnt;
  uint16_t btn_id_pr;

  uint16_t btn_id_tgl;

  uint8_t toggle : 1;
} lv_btnm_ext_t;

typedef enum {
  LV_BTNM_STYLE_BG,
  LV_BTNM_STYLE_BTN_REL,
  LV_BTNM_STYLE_BTN_PR,
  LV_BTNM_STYLE_BTN_TGL_REL,
  LV_BTNM_STYLE_BTN_TGL_PR,
  LV_BTNM_STYLE_BTN_INA,
} lv_btnm_style_t;
# 84 "./include/display/lv_objx/lv_btnm.h"
lv_obj_t *lv_btnm_create(lv_obj_t *par, lv_obj_t *copy);
# 105 "./include/display/lv_objx/lv_btnm.h"
void lv_btnm_set_map(lv_obj_t *btnm, const char **map);







void lv_btnm_set_action(lv_obj_t *btnm, lv_btnm_action_t action);







void lv_btnm_set_toggle(lv_obj_t *btnm, _Bool en, uint16_t id);







void lv_btnm_set_style(lv_obj_t *btnm, lv_btnm_style_t type, lv_style_t *style);
# 140 "./include/display/lv_objx/lv_btnm.h"
const char **lv_btnm_get_map(lv_obj_t *btnm);






lv_btnm_action_t lv_btnm_get_action(lv_obj_t *btnm);






uint16_t lv_btnm_get_toggled(lv_obj_t *btnm);







lv_style_t *lv_btnm_get_style(lv_obj_t *btnm, lv_btnm_style_t type);
# 33 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_cb.h" 1
# 41 "./include/display/lv_objx/lv_cb.h"
typedef struct {
  lv_btn_ext_t bg_btn;

  lv_obj_t *bullet;
  lv_obj_t *label;
} lv_cb_ext_t;

typedef enum {
  LV_CB_STYLE_BG,
  LV_CB_STYLE_BOX_REL,
  LV_CB_STYLE_BOX_PR,
  LV_CB_STYLE_BOX_TGL_REL,
  LV_CB_STYLE_BOX_TGL_PR,
  LV_CB_STYLE_BOX_INA,
} lv_cb_style_t;
# 68 "./include/display/lv_objx/lv_cb.h"
lv_obj_t *lv_cb_create(lv_obj_t *par, lv_obj_t *copy);
# 79 "./include/display/lv_objx/lv_cb.h"
void lv_cb_set_text(lv_obj_t *cb, const char *txt);






static inline void lv_cb_set_checked(lv_obj_t *cb, _Bool checked) {
  lv_btn_set_state(cb, checked ? LV_BTN_STATE_TGL_REL : LV_BTN_STATE_REL);
}





static inline void lv_cb_set_inactive(lv_obj_t *cb) {
  lv_btn_set_state(cb, LV_BTN_STATE_INA);
}





static inline void lv_cb_set_action(lv_obj_t *cb, lv_action_t action) {
  lv_btn_set_action(cb, LV_BTN_ACTION_CLICK, action);
}







void lv_cb_set_style(lv_obj_t *cb, lv_cb_style_t type, lv_style_t *style);
# 123 "./include/display/lv_objx/lv_cb.h"
const char *lv_cb_get_text(lv_obj_t *cb);






static inline _Bool lv_cb_is_checked(lv_obj_t *cb) {
  return lv_btn_get_state(cb) == LV_BTN_STATE_REL ? 0 : 1;
}






static inline lv_action_t lv_cb_get_action(lv_obj_t *cb) {
  return lv_btn_get_action(cb, LV_BTN_ACTION_CLICK);
}







lv_style_t *lv_cb_get_style(lv_obj_t *cb, lv_cb_style_t type);
# 34 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_chart.h" 1
# 20 "./include/display/lv_objx/lv_chart.h"
# 1 "./include/display/lv_objx/lv_line.h" 1
# 30 "./include/display/lv_objx/lv_line.h"
typedef struct {

  const lv_point_t
      *point_array;
  uint16_t point_num;
  uint8_t
      auto_size : 1;
  uint8_t y_inv : 1;
} lv_line_ext_t;
# 49 "./include/display/lv_objx/lv_line.h"
lv_obj_t *lv_line_create(lv_obj_t *par, lv_obj_t *copy);
# 62 "./include/display/lv_objx/lv_line.h"
void lv_line_set_points(lv_obj_t *line, const lv_point_t *point_a,
                        uint16_t point_num);
# 72 "./include/display/lv_objx/lv_line.h"
void lv_line_set_auto_size(lv_obj_t *line, _Bool autosize_en);
# 81 "./include/display/lv_objx/lv_line.h"
void lv_line_set_y_invert(lv_obj_t *line, _Bool yinv_en);






static inline void lv_line_set_style(lv_obj_t *line, lv_style_t *style) {
  lv_obj_set_style(line, style);
}







static inline void lv_line_set_upscale(lv_obj_t *line, _Bool upcale) {}
# 108 "./include/display/lv_objx/lv_line.h"
_Bool lv_line_get_auto_size(lv_obj_t *line);






_Bool lv_line_get_y_inv(lv_obj_t *line);






static inline lv_style_t *lv_line_get_style(lv_obj_t *line) {
  return lv_obj_get_style(line);
}







static inline _Bool lv_line_get_upscale(lv_obj_t *line) { return 0; }
# 21 "./include/display/lv_objx/lv_chart.h" 2








typedef struct {
  lv_coord_t *points;
  lv_color_t color;
} lv_chart_series_t;


typedef struct {


  lv_ll_t series_ll;

  lv_coord_t ymin;
  lv_coord_t ymax;
  uint8_t hdiv_cnt;
  uint8_t vdiv_cnt;
  uint16_t point_cnt;
  uint8_t type : 3;
  struct {
    lv_coord_t width;
    uint8_t num;
    lv_opa_t opa;
    lv_opa_t dark;
  } series;
} lv_chart_ext_t;


typedef enum {
  LV_CHART_TYPE_LINE = 0x01,
  LV_CHART_TYPE_COLUMN = 0x02,
  LV_CHART_TYPE_POINT = 0x04,
} lv_chart_type_t;
# 73 "./include/display/lv_objx/lv_chart.h"
lv_obj_t *lv_chart_create(lv_obj_t *par, lv_obj_t *copy);
# 85 "./include/display/lv_objx/lv_chart.h"
lv_chart_series_t *lv_chart_add_series(lv_obj_t *chart, lv_color_t color);
# 97 "./include/display/lv_objx/lv_chart.h"
void lv_chart_set_div_line_count(lv_obj_t *chart, uint8_t hdiv, uint8_t vdiv);







void lv_chart_set_range(lv_obj_t *chart, lv_coord_t ymin, lv_coord_t ymax);






void lv_chart_set_type(lv_obj_t *chart, lv_chart_type_t type);






void lv_chart_set_point_count(lv_obj_t *chart, uint16_t point_cnt);






void lv_chart_set_series_opa(lv_obj_t *chart, lv_opa_t opa);






void lv_chart_set_series_width(lv_obj_t *chart, lv_coord_t width);






void lv_chart_set_series_darking(lv_obj_t *chart, lv_opa_t dark_eff);







void lv_chart_init_points(lv_obj_t *chart, lv_chart_series_t *ser,
                          lv_coord_t y);







void lv_chart_set_points(lv_obj_t *chart, lv_chart_series_t *ser,
                         lv_coord_t *y_array);







void lv_chart_set_next(lv_obj_t *chart, lv_chart_series_t *ser, lv_coord_t y);






static inline void lv_chart_set_style(lv_obj_t *chart, lv_style_t *style) {
  lv_obj_set_style(chart, style);
}
# 186 "./include/display/lv_objx/lv_chart.h"
lv_chart_type_t lv_chart_get_type(lv_obj_t *chart);






uint16_t lv_chart_get_point_cnt(lv_obj_t *chart);






lv_opa_t lv_chart_get_series_opa(lv_obj_t *chart);






lv_coord_t lv_chart_get_series_width(lv_obj_t *chart);






lv_opa_t lv_chart_get_series_darking(lv_obj_t *chart);






static inline lv_style_t *lv_chart_get_style(lv_obj_t *chart) {
  return lv_obj_get_style(chart);
}
# 233 "./include/display/lv_objx/lv_chart.h"
void lv_chart_refresh(lv_obj_t *chart);
# 35 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_objx/lv_ddlist.h" 1
# 32 "./include/display/lv_objx/lv_ddlist.h"
# 1 "./include/display/lv_objx/lv_page.h" 1
# 36 "./include/display/lv_objx/lv_page.h"
typedef enum {
  LV_SB_MODE_OFF,
  LV_SB_MODE_ON,
  LV_SB_MODE_DRAG,
  LV_SB_MODE_AUTO,

} lv_sb_mode_t;


typedef struct {
  lv_cont_ext_t bg;

  lv_obj_t *scrl;
  lv_action_t rel_action;
  lv_action_t pr_action;
  struct {
    lv_style_t *style;
    lv_area_t hor_area;

    lv_area_t ver_area;

    uint8_t hor_draw : 1;

    uint8_t ver_draw : 1;

    uint8_t mode : 3;
  } sb;
} lv_page_ext_t;

typedef enum {
  LV_PAGE_STYLE_BG,
  LV_PAGE_STYLE_SCRL,
  LV_PAGE_STYLE_SB,
} lv_page_style_t;
# 82 "./include/display/lv_objx/lv_page.h"
lv_obj_t *lv_page_create(lv_obj_t *par, lv_obj_t *copy);






lv_obj_t *lv_page_get_scrl(lv_obj_t *page);
# 100 "./include/display/lv_objx/lv_page.h"
void lv_page_set_rel_action(lv_obj_t *page, lv_action_t rel_action);






void lv_page_set_pr_action(lv_obj_t *page, lv_action_t pr_action);






void lv_page_set_sb_mode(lv_obj_t *page, lv_sb_mode_t sb_mode);
# 124 "./include/display/lv_objx/lv_page.h"
static inline void lv_page_set_scrl_fit(lv_obj_t *page, _Bool hor_en,
                                        _Bool ver_en) {
  lv_cont_set_fit(lv_page_get_scrl(page), hor_en, ver_en);
}







static inline void lv_page_set_scrl_width(lv_obj_t *page, lv_coord_t w) {
  lv_obj_set_width(lv_page_get_scrl(page), w);
}







static inline void lv_page_set_scrl_height(lv_obj_t *page, lv_coord_t h) {
  lv_obj_set_height(lv_page_get_scrl(page), h);
}






static inline void lv_page_set_scrl_layout(lv_obj_t *page, lv_layout_t layout) {
  lv_cont_set_layout(lv_page_get_scrl(page), layout);
}







void lv_page_set_style(lv_obj_t *page, lv_page_style_t type, lv_style_t *style);
# 175 "./include/display/lv_objx/lv_page.h"
lv_sb_mode_t lv_page_get_sb_mode(lv_obj_t *page);






static inline lv_coord_t lv_page_get_scrl_width(lv_obj_t *page) {
  return lv_obj_get_width(lv_page_get_scrl(page));
}






static inline lv_coord_t lv_page_get_scrl_height(lv_obj_t *page) {
  return lv_obj_get_height(lv_page_get_scrl(page));
}






static inline lv_layout_t lv_page_get_scrl_layout(lv_obj_t *page) {
  return lv_cont_get_layout(lv_page_get_scrl(page));
}






static inline _Bool lv_page_get_scrl_hor_fit(lv_obj_t *page) {
  return lv_cont_get_hor_fit(lv_page_get_scrl(page));
}






static inline _Bool lv_page_get_scrl_fit_ver(lv_obj_t *page) {
  return lv_cont_get_ver_fit(lv_page_get_scrl(page));
}







lv_style_t *lv_page_get_style(lv_obj_t *page, lv_page_style_t type);
# 240 "./include/display/lv_objx/lv_page.h"
void lv_page_glue_obj(lv_obj_t *obj, _Bool glue);







void lv_page_focus(lv_obj_t *page, lv_obj_t *obj, uint16_t anim_time);
# 33 "./include/display/lv_objx/lv_ddlist.h" 2
# 42 "./include/display/lv_objx/lv_ddlist.h"
typedef struct {
  lv_page_ext_t page;

  lv_obj_t *label;
  lv_style_t *sel_style;
  lv_action_t action;
  uint16_t option_cnt;
  uint16_t sel_opt_id;
  uint16_t sel_opt_id_ori;
  uint16_t anim_time;
  uint8_t opened : 1;
  lv_coord_t fix_height;
} lv_ddlist_ext_t;

typedef enum {
  LV_DDLIST_STYLE_BG,
  LV_DDLIST_STYLE_SEL,
  LV_DDLIST_STYLE_SB,
} lv_ddlist_style_t;
# 73 "./include/display/lv_objx/lv_ddlist.h"
lv_obj_t *lv_ddlist_create(lv_obj_t *par, lv_obj_t *copy);
# 84 "./include/display/lv_objx/lv_ddlist.h"
void lv_ddlist_set_options(lv_obj_t *ddlist, const char *options);






void lv_ddlist_set_selected(lv_obj_t *ddlist, uint16_t sel_opt);






void lv_ddlist_set_action(lv_obj_t *ddlist, lv_action_t action);
# 107 "./include/display/lv_objx/lv_ddlist.h"
void lv_ddlist_set_fix_height(lv_obj_t *ddlist, lv_coord_t h);






void lv_ddlist_set_hor_fit(lv_obj_t *ddlist, _Bool fit_en);






static inline void lv_ddlist_set_sb_mode(lv_obj_t *ddlist, lv_sb_mode_t mode) {
  lv_page_set_sb_mode(ddlist, mode);
}






void lv_ddlist_set_anim_time(lv_obj_t *ddlist, uint16_t anim_time);







void lv_ddlist_set_style(lv_obj_t *ddlist, lv_ddlist_style_t type,
                         lv_style_t *style);
# 150 "./include/display/lv_objx/lv_ddlist.h"
const char *lv_ddlist_get_options(lv_obj_t *ddlist);






uint16_t lv_ddlist_get_selected(lv_obj_t *ddlist);






void lv_ddlist_get_selected_str(lv_obj_t *ddlist, char *buf);






lv_action_t lv_ddlist_get_action(lv_obj_t *ddlist);






lv_coord_t lv_ddlist_get_fix_height(lv_obj_t *ddlist);






static inline lv_sb_mode_t lv_ddlist_get_sb_mode(lv_obj_t *ddlist) {
  return lv_page_get_sb_mode(ddlist);
}






uint16_t lv_ddlist_get_anim_time(lv_obj_t *ddlist);







lv_style_t *lv_ddlist_get_style(lv_obj_t *ddlist, lv_ddlist_style_t type);
# 213 "./include/display/lv_objx/lv_ddlist.h"
void lv_ddlist_open(lv_obj_t *ddlist, _Bool anim);






void lv_ddlist_close_en(lv_obj_t *ddlist, _Bool anim);
# 37 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_gauge.h" 1
# 28 "./include/display/lv_objx/lv_gauge.h"
# 1 "./include/display/lv_objx/lv_lmeter.h" 1
# 29 "./include/display/lv_objx/lv_lmeter.h"
typedef struct {


  uint16_t scale_angle;
  uint8_t line_cnt;
  int16_t cur_value;
  int16_t min_value;
  int16_t max_value;
} lv_lmeter_ext_t;
# 50 "./include/display/lv_objx/lv_lmeter.h"
lv_obj_t *lv_lmeter_create(lv_obj_t *par, lv_obj_t *copy);
# 61 "./include/display/lv_objx/lv_lmeter.h"
void lv_lmeter_set_value(lv_obj_t *lmeter, int16_t value);







void lv_lmeter_set_range(lv_obj_t *lmeter, int16_t min, int16_t max);







void lv_lmeter_set_scale(lv_obj_t *lmeter, uint16_t angle, uint8_t line_cnt);






static inline void lv_lmeter_set_style(lv_obj_t *lmeter, lv_style_t *bg) {
  lv_obj_set_style(lmeter, bg);
}
# 97 "./include/display/lv_objx/lv_lmeter.h"
int16_t lv_lmeter_get_value(lv_obj_t *lmeter);






int16_t lv_lmeter_get_min_value(lv_obj_t *lmeter);






int16_t lv_lmeter_get_max_value(lv_obj_t *lmeter);






uint8_t lv_lmeter_get_line_count(lv_obj_t *lmeter);






uint16_t lv_lmeter_get_scale_angle(lv_obj_t *lmeter);






static inline lv_style_t *lv_lmeter_get_style_bg(lv_obj_t *lmeter) {
  return lv_obj_get_style(lmeter);
}
# 29 "./include/display/lv_objx/lv_gauge.h" 2
# 39 "./include/display/lv_objx/lv_gauge.h"
typedef struct {
  lv_lmeter_ext_t lmeter;

  int16_t *values;
  const lv_color_t *
      needle_colors;
  uint8_t needle_count;
  uint8_t label_count;
} lv_gauge_ext_t;
# 60 "./include/display/lv_objx/lv_gauge.h"
lv_obj_t *lv_gauge_create(lv_obj_t *par, lv_obj_t *copy);
# 72 "./include/display/lv_objx/lv_gauge.h"
void lv_gauge_set_needle_count(lv_obj_t *gauge, uint8_t needle_cnt,
                               const lv_color_t *colors);







void lv_gauge_set_value(lv_obj_t *gauge, uint8_t needle_id, int16_t value);







static inline void lv_gauge_set_range(lv_obj_t *gauge, int16_t min,
                                      int16_t max) {
  lv_lmeter_set_range(gauge, min, max);
}







static inline void lv_gauge_set_critical_value(lv_obj_t *gauge, int16_t value) {
  lv_lmeter_set_value(gauge, value);
}
# 111 "./include/display/lv_objx/lv_gauge.h"
void lv_gauge_set_scale(lv_obj_t *gauge, uint16_t angle, uint8_t line_cnt,
                        uint8_t label_cnt);






static inline void lv_gauge_set_style(lv_obj_t *gauge, lv_style_t *bg) {
  lv_obj_set_style(gauge, bg);
}
# 133 "./include/display/lv_objx/lv_gauge.h"
int16_t lv_gauge_get_value(lv_obj_t *gauge, uint8_t needle);






uint8_t lv_gauge_get_needle_count(lv_obj_t *gauge);






static inline int16_t lv_gauge_get_min_value(lv_obj_t *lmeter) {
  return lv_lmeter_get_min_value(lmeter);
}






static inline int16_t lv_gauge_get_max_value(lv_obj_t *lmeter) {
  return lv_lmeter_get_max_value(lmeter);
}






static inline int16_t lv_gauge_get_critical_value(lv_obj_t *gauge) {
  return lv_lmeter_get_value(gauge);
}






uint8_t lv_gauge_get_label_count(lv_obj_t *gauge);






static inline uint8_t lv_gauge_get_line_count(lv_obj_t *gauge) {
  return lv_lmeter_get_line_count(gauge);
}






static inline uint16_t lv_gauge_get_scale_angle(lv_obj_t *gauge) {
  return lv_lmeter_get_scale_angle(gauge);
}






static inline lv_style_t *lv_gauge_get_style(lv_obj_t *gauge) {
  return lv_obj_get_style(gauge);
}
# 38 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_img.h" 1
# 20 "./include/display/lv_objx/lv_img.h"
# 1 "./include/display/lv_draw/lv_draw.h" 1
# 37 "./include/display/lv_draw/lv_draw.h"
typedef struct {
  union {
    struct {
      uint32_t chroma_keyed : 1;

      uint32_t
          alpha_byte : 1;
      uint32_t format : 6;
      uint32_t w : 12;
      uint32_t h : 12;
    } header;
    uint8_t src_type;
  };

  union {
    const uint8_t *pixel_map;

    uint8_t first_pixel;

  };
} lv_img_t;

typedef enum {
  LV_IMG_FORMAT_UNKOWN = 0,
  LV_IMG_FORMAT_INTERNAL_RAW,
  LV_IMG_FORMAT_FILE_RAW_RGB332,
  LV_IMG_FORMAT_FILE_RAW_RGB565,
  LV_IMG_FORMAT_FILE_RAW_RGB888,
} lv_img_format_t;

typedef enum {
  LV_IMG_SRC_VARIABLE,
  LV_IMG_SRC_FILE,
  LV_IMG_SRC_SYMBOL,
  LV_IMG_SRC_UNKNOWN,
} lv_img_src_t;
# 84 "./include/display/lv_draw/lv_draw.h"
void lv_draw_rect(const lv_area_t *cords_p, const lv_area_t *mask_p,
                  const lv_style_t *style_p);
# 109 "./include/display/lv_draw/lv_draw.h"
void lv_draw_label(const lv_area_t *cords_p, const lv_area_t *mask_p,
                   const lv_style_t *style_p, const char *txt,
                   lv_txt_flag_t flag, lv_point_t *offset);
# 121 "./include/display/lv_draw/lv_draw.h"
void lv_draw_img(const lv_area_t *coords, const lv_area_t *mask,
                 const lv_style_t *style, const void *src);
# 132 "./include/display/lv_draw/lv_draw.h"
void lv_draw_line(const lv_point_t *p1, const lv_point_t *p2,
                  const lv_area_t *mask_p, const lv_style_t *style_p);
# 21 "./include/display/lv_objx/lv_img.h" 2

# 1 "./include/display/lv_misc/lv_fs.h" 1
# 32 "./include/display/lv_misc/lv_fs.h"
typedef enum {
  LV_FS_RES_OK = 0,
  LV_FS_RES_HW_ERR,
  LV_FS_RES_FS_ERR,
  LV_FS_RES_NOT_EX,
  LV_FS_RES_FULL,
  LV_FS_RES_LOCKED,
  LV_FS_RES_DENIED,
  LV_FS_RES_BUSY,
  LV_FS_RES_TOUT,
  LV_FS_RES_NOT_IMP,
  LV_FS_RES_OUT_OF_MEM,
  LV_FS_RES_INV_PARAM,
  LV_FS_RES_UNKNOWN,
} lv_fs_res_t;

struct __lv_fs_drv_t;

typedef struct {
  void *file_d;
  struct __lv_fs_drv_t *drv;
} lv_fs_file_t;

typedef struct {
  void *dir_d;
  struct __lv_fs_drv_t *drv;
} lv_fs_dir_t;

typedef enum {
  LV_FS_MODE_WR = 0x01,
  LV_FS_MODE_RD = 0x02,
} lv_fs_mode_t;

typedef struct __lv_fs_drv_t {
  char letter;
  uint16_t file_size;
  uint16_t rddir_size;
  _Bool (*ready)(void);

  lv_fs_res_t (*open)(void *file_p, const char *path, lv_fs_mode_t mode);
  lv_fs_res_t (*close)(void *file_p);
  lv_fs_res_t (*remove)(const char *fn);
  lv_fs_res_t (*read)(void *file_p, void *buf, uint32_t btr, uint32_t *br);
  lv_fs_res_t (*write)(void *file_p, const void *buf, uint32_t btw,
                       uint32_t *bw);
  lv_fs_res_t (*seek)(void *file_p, uint32_t pos);
  lv_fs_res_t (*tell)(void *file_p, uint32_t *pos_p);
  lv_fs_res_t (*trunc)(void *file_p);
  lv_fs_res_t (*size)(void *file_p, uint32_t *size_p);
  lv_fs_res_t (*free)(uint32_t *total_p, uint32_t *free_p);

  lv_fs_res_t (*dir_open)(void *rddir_p, const char *path);
  lv_fs_res_t (*dir_read)(void *rddir_p, char *fn);
  lv_fs_res_t (*dir_close)(void *rddir_p);
} lv_fs_drv_t;
# 95 "./include/display/lv_misc/lv_fs.h"
void lv_fs_init(void);







void lv_fs_add_drv(lv_fs_drv_t *drv_p);
# 114 "./include/display/lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_open(lv_fs_file_t *file_p, const char *path,
                       lv_fs_mode_t mode);






lv_fs_res_t lv_fs_close(lv_fs_file_t *file_p);






lv_fs_res_t lv_fs_remove(const char *path);
# 139 "./include/display/lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_read(lv_fs_file_t *file_p, void *buf, uint32_t btr,
                       uint32_t *br);
# 150 "./include/display/lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_write(lv_fs_file_t *file_p, const void *buf, uint32_t btw,
                        uint32_t *bw);







lv_fs_res_t lv_fs_seek(lv_fs_file_t *file_p, uint32_t pos);







lv_fs_res_t lv_fs_tell(lv_fs_file_t *file_p, uint32_t *pos);







lv_fs_res_t lv_fs_size(lv_fs_file_t *file_p, uint32_t *size);







lv_fs_res_t lv_fs_dir_open(lv_fs_dir_t *rddir_p, const char *path);
# 192 "./include/display/lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_dir_read(lv_fs_dir_t *rddir_p, char *fn);






lv_fs_res_t lv_fs_dir_close(lv_fs_dir_t *rddir_p);
# 208 "./include/display/lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_free(char letter, uint32_t *total_p, uint32_t *free_p);






char *lv_fs_get_letters(char *buf);






const char *lv_fs_get_ext(const char *fn);






char *lv_fs_up(char *path);






const char *lv_fs_get_last(const char *path);
# 23 "./include/display/lv_objx/lv_img.h" 2
# 33 "./include/display/lv_objx/lv_img.h"
typedef struct {



  const void *src;

  lv_coord_t
      w;
  lv_coord_t h;

  uint8_t src_type : 2;
  uint8_t
      auto_size : 1;
  uint8_t
      chroma_keyed : 1;

  uint8_t alpha_byte : 1;
} lv_img_ext_t;
# 63 "./include/display/lv_objx/lv_img.h"
lv_obj_t *lv_img_create(lv_obj_t *par, lv_obj_t *copy);
# 74 "./include/display/lv_objx/lv_img.h"
void lv_img_set_src(lv_obj_t *img, const void *src_img);
# 83 "./include/display/lv_objx/lv_img.h"
static inline void lv_img_set_file(lv_obj_t *img, const char *fn) {}







void lv_img_set_auto_size(lv_obj_t *img, _Bool autosize_en);






static inline void lv_img_set_style(lv_obj_t *img, lv_style_t *style) {
  lv_obj_set_style(img, style);
}







static inline void lv_img_set_upscale(lv_obj_t *img, _Bool upcale) {}
# 123 "./include/display/lv_objx/lv_img.h"
lv_img_src_t lv_img_get_src_type(const void *src);






const char *lv_img_get_file_name(lv_obj_t *img);






_Bool lv_img_get_auto_size(lv_obj_t *img);






static inline lv_style_t *lv_img_get_style(lv_obj_t *img) {
  return lv_obj_get_style(img);
}







static inline _Bool lv_img_get_upscale(lv_obj_t *img) { return 0; }
# 39 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_kb.h" 1
# 40 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_objx/lv_led.h" 1
# 30 "./include/display/lv_objx/lv_led.h"
typedef struct {


  uint8_t bright;
} lv_led_ext_t;
# 47 "./include/display/lv_objx/lv_led.h"
lv_obj_t *lv_led_create(lv_obj_t *par, lv_obj_t *copy);






void lv_led_set_bright(lv_obj_t *led, uint8_t bright);





void lv_led_on(lv_obj_t *led);





void lv_led_off(lv_obj_t *led);





void lv_led_toggle(lv_obj_t *led);






static inline void lv_led_set_style(lv_obj_t *led, lv_style_t *style) {
  lv_obj_set_style(led, style);
}






uint8_t lv_led_get_bright(lv_obj_t *led);






static inline lv_style_t *lv_led_get_style(lv_obj_t *led) {
  return lv_obj_get_style(led);
}
# 42 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_objx/lv_list.h" 1
# 47 "./include/display/lv_objx/lv_list.h"
typedef struct {
  lv_page_ext_t page;

  uint16_t anim_time;
  lv_style_t
      *styles_btn[LV_BTN_STATE_NUM];
  lv_style_t *style_img;
} lv_list_ext_t;

typedef enum {
  LV_LIST_STYLE_BG,
  LV_LIST_STYLE_SCRL,
  LV_LIST_STYLE_SB,
  LV_LIST_STYLE_BTN_REL,
  LV_LIST_STYLE_BTN_PR,
  LV_LIST_STYLE_BTN_TGL_REL,
  LV_LIST_STYLE_BTN_TGL_PR,
  LV_LIST_STYLE_BTN_INA,
} lv_list_style_t;
# 78 "./include/display/lv_objx/lv_list.h"
lv_obj_t *lv_list_create(lv_obj_t *par, lv_obj_t *copy);
# 92 "./include/display/lv_objx/lv_list.h"
lv_obj_t *lv_list_add(lv_obj_t *list, const void *img_src, const char *txt,
                      lv_action_t rel_action);
# 104 "./include/display/lv_objx/lv_list.h"
void lv_list_set_anim_time(lv_obj_t *list, uint16_t anim_time);






static inline void lv_list_set_sb_mode(lv_obj_t *list, lv_sb_mode_t mode) {
  lv_page_set_sb_mode(list, mode);
}







void lv_list_set_style(lv_obj_t *list, lv_list_style_t type, lv_style_t *style);
# 132 "./include/display/lv_objx/lv_list.h"
const char *lv_list_get_btn_text(lv_obj_t *btn);





lv_obj_t *lv_list_get_btn_label(lv_obj_t *btn);






lv_obj_t *lv_list_get_btn_img(lv_obj_t *btn);






uint16_t lv_list_get_anim_time(lv_obj_t *list);






static inline lv_sb_mode_t lv_list_get_sb_mode(lv_obj_t *list) {
  return lv_page_get_sb_mode(list);
}







lv_style_t *lv_list_get_style(lv_obj_t *list, lv_list_style_t type);
# 179 "./include/display/lv_objx/lv_list.h"
void lv_list_up(lv_obj_t *list);




void lv_list_down(lv_obj_t *list);







void lv_list_focus(lv_obj_t *btn, _Bool anim_en);
# 44 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_objx/lv_mbox.h" 1
# 47 "./include/display/lv_objx/lv_mbox.h"
typedef struct {
  lv_cont_ext_t bg;

  lv_obj_t *text;
  lv_obj_t *btnm;
  uint16_t anim_time;
} lv_mbox_ext_t;

typedef enum {
  LV_MBOX_STYLE_BG,
  LV_MBOX_STYLE_BTN_BG,
  LV_MBOX_STYLE_BTN_REL,
  LV_MBOX_STYLE_BTN_PR,
  LV_MBOX_STYLE_BTN_TGL_REL,
  LV_MBOX_STYLE_BTN_TGL_PR,
  LV_MBOX_STYLE_BTN_INA,
} lv_mbox_style_t;
# 76 "./include/display/lv_objx/lv_mbox.h"
lv_obj_t *lv_mbox_create(lv_obj_t *par, lv_obj_t *copy);
# 90 "./include/display/lv_objx/lv_mbox.h"
void lv_mbox_add_btns(lv_obj_t *mbox, const char **btn_map,
                      lv_btnm_action_t action);
# 103 "./include/display/lv_objx/lv_mbox.h"
void lv_mbox_set_text(lv_obj_t *mbox, const char *txt);






void lv_mbox_set_action(lv_obj_t *mbox, lv_btnm_action_t action);






void lv_mbox_set_anim_time(lv_obj_t *mbox, uint16_t anim_time);






void lv_mbox_start_auto_close(lv_obj_t *mbox, uint16_t delay);





void lv_mbox_stop_auto_close(lv_obj_t *mbox);







void lv_mbox_set_style(lv_obj_t *mbox, lv_mbox_style_t type, lv_style_t *style);
# 149 "./include/display/lv_objx/lv_mbox.h"
const char *lv_mbox_get_text(lv_obj_t *mbox);







lv_obj_t *lv_mbox_get_from_btn(lv_obj_t *btn);






uint16_t lv_mbox_get_anim_time(lv_obj_t *mbox);







lv_style_t *lv_mbox_get_style(lv_obj_t *mbox, lv_mbox_style_t type);
# 46 "./include/display/lvgl.h" 2

# 1 "./include/display/lv_objx/lv_roller.h" 1
# 36 "./include/display/lv_objx/lv_roller.h"
typedef struct {
  lv_ddlist_ext_t ddlist;

} lv_roller_ext_t;

typedef enum {
  LV_ROLLER_STYLE_BG,
  LV_ROLLER_STYLE_SEL,
} lv_roller_style_t;
# 57 "./include/display/lv_objx/lv_roller.h"
lv_obj_t *lv_roller_create(lv_obj_t *par, lv_obj_t *copy);
# 68 "./include/display/lv_objx/lv_roller.h"
static inline void lv_roller_set_options(lv_obj_t *roller,
                                         const char *options) {
  lv_ddlist_set_options(roller, options);
}







void lv_roller_set_selected(lv_obj_t *roller, uint16_t sel_opt, _Bool anim_en);






static inline void lv_roller_set_action(lv_obj_t *roller, lv_action_t action) {
  lv_ddlist_set_action(roller, action);
}






void lv_roller_set_visible_row_count(lv_obj_t *roller, uint8_t row_cnt);






static inline void lv_roller_set_hor_fit(lv_obj_t *roller, _Bool fit_en) {
  lv_ddlist_set_hor_fit(roller, fit_en);
}






static inline void lv_roller_set_anim_time(lv_obj_t *roller,
                                           uint16_t anim_time) {
  lv_ddlist_set_anim_time(roller, anim_time);
}







void lv_roller_set_style(lv_obj_t *roller, lv_roller_style_t type,
                         lv_style_t *style);
# 134 "./include/display/lv_objx/lv_roller.h"
static inline const char *lv_roller_get_options(lv_obj_t *roller) {
  return lv_ddlist_get_options(roller);
}






static inline uint16_t lv_roller_get_selected(lv_obj_t *roller) {
  return lv_ddlist_get_selected(roller);
}






static inline void lv_roller_get_selected_str(lv_obj_t *roller, char *buf) {
  lv_ddlist_get_selected_str(roller, buf);
}






static inline lv_action_t lv_roller_get_action(lv_obj_t *roller) {
  return lv_ddlist_get_action(roller);
}






static inline uint16_t lv_roller_get_anim_time(lv_obj_t *roller) {
  return lv_ddlist_get_anim_time(roller);
}






_Bool lv_roller_get_hor_fit(lv_obj_t *roller);







lv_style_t *lv_roller_get_style(lv_obj_t *roller, lv_roller_style_t type);
# 48 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_slider.h" 1
# 35 "./include/display/lv_objx/lv_slider.h"
typedef struct {
  lv_bar_ext_t bar;

  lv_action_t action;
  lv_style_t *style_knob;
  int16_t drag_value;

  uint8_t knob_in : 1;
} lv_slider_ext_t;


typedef enum {
  LV_SLIDER_STYLE_BG,
  LV_SLIDER_STYLE_INDIC,
  LV_SLIDER_STYLE_KNOB,
} lv_slider_style_t;
# 63 "./include/display/lv_objx/lv_slider.h"
lv_obj_t *lv_slider_create(lv_obj_t *par, lv_obj_t *copy);
# 74 "./include/display/lv_objx/lv_slider.h"
static inline void lv_slider_set_value(lv_obj_t *slider, int16_t value) {
  lv_bar_set_value(slider, value);
}







static inline void lv_slider_set_value_anim(lv_obj_t *slider, int16_t value,
                                            uint16_t anim_time) {
  lv_bar_set_value_anim(slider, value, anim_time);
}







static inline void lv_slider_set_range(lv_obj_t *slider, int16_t min,
                                       int16_t max) {
  lv_bar_set_range(slider, min, max);
}






void lv_slider_set_action(lv_obj_t *slider, lv_action_t action);







void lv_slider_set_knob_in(lv_obj_t *slider, _Bool in);







void lv_slider_set_style(lv_obj_t *slider, lv_slider_style_t type,
                         lv_style_t *style);
# 133 "./include/display/lv_objx/lv_slider.h"
int16_t lv_slider_get_value(lv_obj_t *slider);






static inline int16_t lv_slider_get_min_value(lv_obj_t *slider) {
  return lv_bar_get_min_value(slider);
}






static inline int16_t lv_slider_get_max_value(lv_obj_t *slider) {
  return lv_bar_get_max_value(slider);
}






lv_action_t lv_slider_get_action(lv_obj_t *slider);






_Bool lv_slider_is_dragged(lv_obj_t *slider);







_Bool lv_slider_get_knob_in(lv_obj_t *slider);







lv_style_t *lv_slider_get_style(lv_obj_t *slider, lv_slider_style_t type);
# 49 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_sw.h" 1
# 35 "./include/display/lv_objx/lv_sw.h"
typedef struct {
  lv_slider_ext_t slider;

  lv_style_t *style_knob_off;
  lv_style_t *style_knob_on;

  uint8_t changed : 1;
} lv_sw_ext_t;

typedef enum {
  LV_SW_STYLE_BG,
  LV_SW_STYLE_INDIC,
  LV_SW_STYLE_KNOB_OFF,
  LV_SW_STYLE_KNOB_ON,
} lv_sw_style_t;
# 62 "./include/display/lv_objx/lv_sw.h"
lv_obj_t *lv_sw_create(lv_obj_t *par, lv_obj_t *copy);
# 72 "./include/display/lv_objx/lv_sw.h"
void lv_sw_on(lv_obj_t *sw);





void lv_sw_off(lv_obj_t *sw);






static inline void lv_sw_set_action(lv_obj_t *sw, lv_action_t action) {
  lv_slider_set_action(sw, action);
}







void lv_sw_set_style(lv_obj_t *sw, lv_sw_style_t type, lv_style_t *style);
# 106 "./include/display/lv_objx/lv_sw.h"
static inline _Bool lv_sw_get_state(lv_obj_t *sw) {
  return lv_bar_get_value(sw) == 0 ? 0 : 1;
}






static inline lv_action_t lv_sw_get_action(lv_obj_t *slider) {
  return lv_slider_get_action(slider);
}







lv_style_t *lv_sw_get_style(lv_obj_t *sw, lv_sw_style_t type);
# 50 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_ta.h" 1
# 41 "./include/display/lv_objx/lv_ta.h"
typedef enum {
  LV_CURSOR_NONE,
  LV_CURSOR_LINE,
  LV_CURSOR_BLOCK,
  LV_CURSOR_OUTLINE,
  LV_CURSOR_UNDERLINE,
  LV_CURSOR_HIDDEN = 0x10,
} lv_cursor_type_t;


typedef struct {
  lv_page_ext_t page;

  lv_obj_t *label;
  char *pwd_tmp;
  uint8_t pwd_mode : 1;
  uint8_t one_line : 1;
  struct {
    lv_style_t *style;
    lv_coord_t
        valid_x;

    uint16_t
        pos;

    lv_cursor_type_t type;
    uint8_t state : 1;

  } cursor;
} lv_ta_ext_t;

typedef enum {
  LV_TA_STYLE_BG,
  LV_TA_STYLE_SB,
  LV_TA_STYLE_CURSOR,
} lv_ta_style_t;
# 89 "./include/display/lv_objx/lv_ta.h"
lv_obj_t *lv_ta_create(lv_obj_t *par, lv_obj_t *copy);
# 100 "./include/display/lv_objx/lv_ta.h"
void lv_ta_add_char(lv_obj_t *ta, char c);






void lv_ta_add_text(lv_obj_t *ta, const char *txt);





void lv_ta_del_char(lv_obj_t *ta);
# 124 "./include/display/lv_objx/lv_ta.h"
void lv_ta_set_text(lv_obj_t *ta, const char *txt);
# 133 "./include/display/lv_objx/lv_ta.h"
void lv_ta_set_cursor_pos(lv_obj_t *ta, int16_t pos);






void lv_ta_set_cursor_type(lv_obj_t *ta, lv_cursor_type_t cur_type);





void lv_ta_set_pwd_mode(lv_obj_t *ta, _Bool pwd_en);






void lv_ta_set_one_line(lv_obj_t *ta, _Bool en);






static inline void lv_ta_set_sb_mode(lv_obj_t *ta, lv_sb_mode_t mode) {
  lv_page_set_sb_mode(ta, mode);
}







void lv_ta_set_style(lv_obj_t *ta, lv_ta_style_t type, lv_style_t *style);
# 181 "./include/display/lv_objx/lv_ta.h"
const char *lv_ta_get_text(lv_obj_t *ta);






lv_obj_t *lv_ta_get_label(lv_obj_t *ta);






uint16_t lv_ta_get_cursor_pos(lv_obj_t *ta);






_Bool lv_ta_get_cursor_show(lv_obj_t *ta);






lv_cursor_type_t lv_ta_get_cursor_type(lv_obj_t *ta);






_Bool lv_ta_get_pwd_mode(lv_obj_t *ta);






_Bool lv_ta_get_one_line(lv_obj_t *ta);






static inline lv_sb_mode_t lv_ta_get_sb_mode(lv_obj_t *ta) {
  return lv_page_get_sb_mode(ta);
}







lv_style_t *lv_ta_get_style(lv_obj_t *ta, lv_ta_style_t type);
# 250 "./include/display/lv_objx/lv_ta.h"
void lv_ta_cursor_right(lv_obj_t *ta);





void lv_ta_cursor_left(lv_obj_t *ta);





void lv_ta_cursor_down(lv_obj_t *ta);





void lv_ta_cursor_up(lv_obj_t *ta);
# 51 "./include/display/lvgl.h" 2
# 1 "./include/display/lv_objx/lv_tabview.h" 1
# 32 "./include/display/lv_objx/lv_tabview.h"
# 1 "./include/display/lv_objx/lv_win.h" 1
# 52 "./include/display/lv_objx/lv_win.h"
typedef struct {


  lv_obj_t *page;
  lv_obj_t *header;
  lv_obj_t *title;
  lv_style_t *style_header;
  lv_style_t *style_btn_rel;
  lv_style_t *style_btn_pr;
  lv_coord_t btn_size;
} lv_win_ext_t;

typedef enum {
  LV_WIN_STYLE_BG,
  LV_WIN_STYLE_CONTENT_BG,
  LV_WIN_STYLE_CONTENT_SCRL,
  LV_WIN_STYLE_SB,
  LV_WIN_STYLE_HEADER,
  LV_WIN_STYLE_BTN_REL,
  LV_WIN_STYLE_BTN_PR,
} lv_win_style_t;
# 85 "./include/display/lv_objx/lv_win.h"
lv_obj_t *lv_win_create(lv_obj_t *par, lv_obj_t *copy);
# 99 "./include/display/lv_objx/lv_win.h"
lv_obj_t *lv_win_add_btn(lv_obj_t *win, const void *img_src,
                         lv_action_t rel_action);
# 112 "./include/display/lv_objx/lv_win.h"
lv_res_t lv_win_close_action(lv_obj_t *btn);






void lv_win_set_title(lv_obj_t *win, const char *title);






void lv_win_set_btn_size(lv_obj_t *win, lv_coord_t size);






void lv_win_set_sb_mode(lv_obj_t *win, lv_sb_mode_t sb_mode);






void lv_win_set_layout(lv_obj_t *win, lv_layout_t layout);







void lv_win_set_style(lv_obj_t *win, lv_win_style_t type, lv_style_t *style);
# 159 "./include/display/lv_objx/lv_win.h"
const char *lv_win_get_title(lv_obj_t *win);






lv_coord_t lv_win_get_btn_size(lv_obj_t *win);






lv_layout_t lv_win_get_layout(lv_obj_t *win);






lv_sb_mode_t lv_win_get_sb_mode(lv_obj_t *win);






lv_coord_t lv_win_get_width(lv_obj_t *win);







lv_obj_t *lv_win_get_from_btn(lv_obj_t *ctrl_btn);







lv_style_t *lv_win_get_style(lv_obj_t *win, lv_win_style_t type);
# 215 "./include/display/lv_objx/lv_win.h"
void lv_win_focus(lv_obj_t *win, lv_obj_t *obj, uint16_t anim_time);
# 33 "./include/display/lv_objx/lv_tabview.h" 2
# 43 "./include/display/lv_objx/lv_tabview.h"
typedef void (*lv_tabview_action_t)(lv_obj_t *, uint16_t);


typedef struct {


  lv_obj_t *btns;
  lv_obj_t *indic;
  lv_obj_t *content;
  const char **tab_name_ptr;
  lv_point_t point_last;
  uint16_t tab_cur;
  uint16_t tab_cnt;
  uint16_t anim_time;
  uint8_t slide_enable : 1;
  uint8_t draging : 1;
  uint8_t drag_hor : 1;
  lv_tabview_action_t tab_load_action;
} lv_tabview_ext_t;

typedef enum {
  LV_TABVIEW_STYLE_BG,
  LV_TABVIEW_STYLE_INDIC,
  LV_TABVIEW_STYLE_BTN_BG,
  LV_TABVIEW_STYLE_BTN_REL,
  LV_TABVIEW_STYLE_BTN_PR,
  LV_TABVIEW_STYLE_BTN_TGL_REL,
  LV_TABVIEW_STYLE_BTN_TGL_PR,
} lv_tabview_style_t;
# 84 "./include/display/lv_objx/lv_tabview.h"
lv_obj_t *lv_tabview_create(lv_obj_t *par, lv_obj_t *copy);
# 97 "./include/display/lv_objx/lv_tabview.h"
lv_obj_t *lv_tabview_add_tab(lv_obj_t *tabview, const char *name);
# 109 "./include/display/lv_objx/lv_tabview.h"
void lv_tabview_set_tab_act(lv_obj_t *tabview, uint16_t id, _Bool anim_en);
# 119 "./include/display/lv_objx/lv_tabview.h"
void lv_tabview_set_tab_load_action(lv_obj_t *tabview,
                                    lv_tabview_action_t action);






void lv_tabview_set_sliding(lv_obj_t *tabview, _Bool en);






void lv_tabview_set_anim_time(lv_obj_t *tabview, uint16_t anim_time);







void lv_tabview_set_style(lv_obj_t *tabview, lv_tabview_style_t type,
                          lv_style_t *style);
# 154 "./include/display/lv_objx/lv_tabview.h"
uint16_t lv_tabview_get_tab_act(lv_obj_t *tabview);






uint16_t lv_tabview_get_tab_count(lv_obj_t *tabview);






lv_obj_t *lv_tabview_get_tab(lv_obj_t *tabview, uint16_t id);






lv_tabview_action_t lv_tabview_get_tab_load_action(lv_obj_t *tabview);






_Bool lv_tabview_get_sliding(lv_obj_t *tabview);






uint16_t lv_tabview_get_anim_time(lv_obj_t *tabview);







lv_style_t *lv_tabview_get_style(lv_obj_t *tabview, lv_tabview_style_t type);
# 52 "./include/display/lvgl.h" 2

#pragma GCC diagnostic pop
# 31 "./include/pros/llemu.h" 2
#pragma GCC diagnostic pop






typedef void (*lcd_btn_cb_fn_t)(void);





typedef struct lcd_s {
 lv_obj_t* frame;
 lv_obj_t* screen;
 lv_obj_t* lcd_text[8];
 lv_obj_t* btn_container;
 lv_obj_t* btns[3];
 lcd_btn_cb_fn_t callbacks[3];
 volatile uint8_t touch_bits;

} lcd_s_t;
# 64 "./include/pros/llemu.h"
_Bool lcd_is_initialized(void);







_Bool lcd_initialize(void);
# 87 "./include/pros/llemu.h"
_Bool lcd_shutdown(void);
# 107 "./include/pros/llemu.h"
_Bool lcd_print(int16_t line, const char* fmt, ...);
# 125 "./include/pros/llemu.h"
_Bool lcd_set_text(int16_t line, const char* text);
# 138 "./include/pros/llemu.h"
_Bool lcd_clear(void);
# 154 "./include/pros/llemu.h"
_Bool lcd_clear_line(int16_t line);
# 172 "./include/pros/llemu.h"
_Bool lcd_register_btn0_cb(lcd_btn_cb_fn_t cb);
# 190 "./include/pros/llemu.h"
_Bool lcd_register_btn1_cb(lcd_btn_cb_fn_t cb);
# 208 "./include/pros/llemu.h"
_Bool lcd_register_btn2_cb(lcd_btn_cb_fn_t cb);
# 224 "./include/pros/llemu.h"
uint8_t lcd_read_buttons(void);
# 53 "./include/api.h" 2
# 1 "./include/pros/misc.h" 1
# 46 "./include/pros/misc.h"
uint8_t competition_get_status(void);
# 64 "./include/pros/misc.h"
typedef enum { E_CONTROLLER_MASTER = 0, E_CONTROLLER_PARTNER } controller_id_e_t;

typedef enum {
 E_CONTROLLER_ANALOG_LEFT_X = 0,
 E_CONTROLLER_ANALOG_LEFT_Y,
 E_CONTROLLER_ANALOG_RIGHT_X,
 E_CONTROLLER_ANALOG_RIGHT_Y
} controller_analog_e_t;

typedef enum {
 E_CONTROLLER_DIGITAL_L1 = 6,
 E_CONTROLLER_DIGITAL_L2,
 E_CONTROLLER_DIGITAL_R1,
 E_CONTROLLER_DIGITAL_R2,
 E_CONTROLLER_DIGITAL_UP,
 E_CONTROLLER_DIGITAL_DOWN,
 E_CONTROLLER_DIGITAL_LEFT,
 E_CONTROLLER_DIGITAL_RIGHT,
 E_CONTROLLER_DIGITAL_X,
 E_CONTROLLER_DIGITAL_B,
 E_CONTROLLER_DIGITAL_Y,
 E_CONTROLLER_DIGITAL_A
} controller_digital_e_t;
# 149 "./include/pros/misc.h"
int32_t controller_is_connected(controller_id_e_t id);
# 171 "./include/pros/misc.h"
int32_t controller_get_analog(controller_id_e_t id, controller_analog_e_t channel);
# 188 "./include/pros/misc.h"
int32_t controller_get_battery_capacity(controller_id_e_t id);
# 205 "./include/pros/misc.h"
int32_t controller_get_battery_level(controller_id_e_t id);
# 226 "./include/pros/misc.h"
int32_t controller_get_digital(controller_id_e_t id, controller_digital_e_t button);
# 255 "./include/pros/misc.h"
int32_t controller_get_digital_new_press(controller_id_e_t id, controller_digital_e_t button);
# 284 "./include/pros/misc.h"
int32_t controller_print(controller_id_e_t id, uint8_t line, uint8_t col, const char* fmt, ...);
# 311 "./include/pros/misc.h"
int32_t controller_set_text(controller_id_e_t id, uint8_t line, uint8_t col, const char* str);
# 334 "./include/pros/misc.h"
int32_t controller_clear_line(controller_id_e_t id, uint8_t line);
# 355 "./include/pros/misc.h"
int32_t controller_clear(controller_id_e_t id);
# 380 "./include/pros/misc.h"
int32_t controller_rumble(controller_id_e_t id, const char* rumble_pattern);
# 391 "./include/pros/misc.h"
int32_t battery_get_voltage(void);
# 402 "./include/pros/misc.h"
int32_t battery_get_current(void);
# 413 "./include/pros/misc.h"
double battery_get_temperature(void);
# 424 "./include/pros/misc.h"
double battery_get_capacity(void);
# 54 "./include/api.h" 2
# 1 "./include/pros/motors.h" 1
# 57 "./include/pros/motors.h"
int32_t motor_move(uint8_t port, int32_t voltage);
# 83 "./include/pros/motors.h"
int32_t motor_move_absolute(uint8_t port, const double position, const int32_t velocity);
# 111 "./include/pros/motors.h"
int32_t motor_move_relative(uint8_t port, const double position, const int32_t velocity);
# 136 "./include/pros/motors.h"
int32_t motor_move_velocity(uint8_t port, const int32_t velocity);
# 154 "./include/pros/motors.h"
int32_t motor_move_voltage(uint8_t port, const int32_t voltage);
# 175 "./include/pros/motors.h"
int32_t motor_modify_profiled_velocity(uint8_t port, const int32_t velocity);
# 191 "./include/pros/motors.h"
double motor_get_target_position(uint8_t port);
# 207 "./include/pros/motors.h"
int32_t motor_get_target_velocity(uint8_t port);
# 229 "./include/pros/motors.h"
double motor_get_actual_velocity(uint8_t port);
# 245 "./include/pros/motors.h"
int32_t motor_get_current_draw(uint8_t port);
# 261 "./include/pros/motors.h"
int32_t motor_get_direction(uint8_t port);
# 281 "./include/pros/motors.h"
double motor_get_efficiency(uint8_t port);
# 297 "./include/pros/motors.h"
int32_t motor_is_over_current(uint8_t port);
# 313 "./include/pros/motors.h"
int32_t motor_is_over_temp(uint8_t port);
# 328 "./include/pros/motors.h"
int32_t motor_is_stopped(uint32_t port);
# 344 "./include/pros/motors.h"
int32_t motor_get_zero_position_flag(uint32_t port);





typedef enum motor_fault_e {
 E_MOTOR_FAULT_NO_FAULTS = 0x00,
 E_MOTOR_FAULT_MOTOR_OVER_TEMP = 0x01,
 E_MOTOR_FAULT_DRIVER_FAULT = 0x02,
 E_MOTOR_FAULT_OVER_CURRENT = 0x04,
 E_MOTOR_FAULT_DRV_OVER_CURRENT = 0x08
} motor_fault_e_t;
# 393 "./include/pros/motors.h"
uint32_t motor_get_faults(uint8_t port);





typedef enum motor_flag_e {
 E_MOTOR_FLAGS_NONE = 0x00,
 E_MOTOR_FLAGS_BUSY = 0x01,
 E_MOTOR_FLAGS_ZERO_VELOCITY = 0x02,
 E_MOTOR_FLAGS_ZERO_POSITION = 0x04
} motor_flag_e_t;
# 439 "./include/pros/motors.h"
uint32_t motor_get_flags(uint8_t port);
# 459 "./include/pros/motors.h"
int32_t motor_get_raw_position(uint8_t port, uint32_t* const timestamp);
# 475 "./include/pros/motors.h"
double motor_get_position(uint8_t port);
# 491 "./include/pros/motors.h"
double motor_get_power(uint8_t port);
# 507 "./include/pros/motors.h"
double motor_get_temperature(uint8_t port);
# 523 "./include/pros/motors.h"
double motor_get_torque(uint8_t port);
# 539 "./include/pros/motors.h"
int32_t motor_get_voltage(uint8_t port);
# 554 "./include/pros/motors.h"
typedef enum motor_brake_mode_e {
 E_MOTOR_BRAKE_COAST = 0,
 E_MOTOR_BRAKE_BRAKE = 1,
 E_MOTOR_BRAKE_HOLD = 2,
 E_MOTOR_BRAKE_INVALID = 2147483647
} motor_brake_mode_e_t;




typedef enum motor_encoder_units_e {
 E_MOTOR_ENCODER_DEGREES = 0,

 E_MOTOR_ENCODER_ROTATIONS = 1,

 E_MOTOR_ENCODER_COUNTS = 2,

 E_MOTOR_ENCODER_INVALID = 2147483647
} motor_encoder_units_e_t;




typedef enum motor_gearset_e {
 E_MOTOR_GEARSET_36 = 0,
 E_MOTOR_GEARSET_18 = 1,
 E_MOTOR_GEARSET_06 = 2,
 E_MOTOR_GEARSET_INVALID = 2147483647
} motor_gearset_e_t;
# 622 "./include/pros/motors.h"
typedef struct motor_pid_full_s {
 uint8_t kf;
 uint8_t kp;
 uint8_t ki;
 uint8_t kd;
 uint8_t filter;
 uint16_t limit;
 uint8_t threshold;


 uint8_t loopspeed;
} motor_pid_full_s_t;







typedef struct motor_pid_s {
 uint8_t kf;
 uint8_t kp;
 uint8_t ki;
 uint8_t kd;
} motor_pid_s_t;
# 670 "./include/pros/motors.h"
int32_t motor_set_zero_position(uint8_t port, const double position);
# 686 "./include/pros/motors.h"
int32_t motor_tare_position(uint8_t port);
# 704 "./include/pros/motors.h"
int32_t motor_set_brake_mode(uint8_t port, const motor_brake_mode_e_t mode);
# 722 "./include/pros/motors.h"
int32_t motor_set_current_limit(uint8_t port, const int32_t limit);
# 740 "./include/pros/motors.h"
int32_t motor_set_encoder_units(uint8_t port, const motor_encoder_units_e_t units);
# 758 "./include/pros/motors.h"
int32_t motor_set_gearing(uint8_t port, const motor_gearset_e_t gearset);
# 783 "./include/pros/motors.h"
motor_pid_s_t motor_convert_pid(double kf, double kp, double ki, double kd);
# 817 "./include/pros/motors.h"
motor_pid_full_s_t motor_convert_pid_full(double kf, double kp, double ki, double kd, double filter, double limit,
                                          double threshold, double loopspeed);
# 842 "./include/pros/motors.h"
int32_t motor_set_pos_pid(uint8_t port, const motor_pid_s_t pid);
# 865 "./include/pros/motors.h"
int32_t motor_set_pos_pid_full(uint8_t port, const motor_pid_full_s_t pid);
# 889 "./include/pros/motors.h"
int32_t motor_set_vel_pid(uint8_t port, const motor_pid_s_t pid);
# 912 "./include/pros/motors.h"
int32_t motor_set_vel_pid_full(uint8_t port, const motor_pid_full_s_t pid);
# 932 "./include/pros/motors.h"
int32_t motor_set_reversed(uint8_t port, const _Bool reverse);
# 950 "./include/pros/motors.h"
int32_t motor_set_voltage_limit(uint8_t port, const int32_t limit);
# 966 "./include/pros/motors.h"
motor_brake_mode_e_t motor_get_brake_mode(uint8_t port);
# 984 "./include/pros/motors.h"
int32_t motor_get_current_limit(uint8_t port);
# 1000 "./include/pros/motors.h"
motor_encoder_units_e_t motor_get_encoder_units(uint8_t port);
# 1016 "./include/pros/motors.h"
motor_gearset_e_t motor_get_gearing(uint8_t port);
# 1037 "./include/pros/motors.h"
motor_pid_full_s_t motor_get_pos_pid(uint8_t port);
# 1058 "./include/pros/motors.h"
motor_pid_full_s_t motor_get_vel_pid(uint8_t port);
# 1074 "./include/pros/motors.h"
int32_t motor_is_reversed(uint8_t port);
# 1093 "./include/pros/motors.h"
int32_t motor_get_voltage_limit(uint8_t port);
# 55 "./include/api.h" 2
# 1 "./include/pros/rtos.h" 1
# 57 "./include/pros/rtos.h"
typedef void* task_t;
typedef void (*task_fn_t)(void*);

typedef enum {
 E_TASK_STATE_RUNNING = 0,
 E_TASK_STATE_READY,
 E_TASK_STATE_BLOCKED,
 E_TASK_STATE_SUSPENDED,
 E_TASK_STATE_DELETED,
 E_TASK_STATE_INVALID
} task_state_e_t;

typedef enum {
 E_NOTIFY_ACTION_NONE,
 E_NOTIFY_ACTION_BITS,
 E_NOTIFY_ACTION_INCR,
 E_NOTIFY_ACTION_OWRITE,
 E_NOTIFY_ACTION_NO_OWRITE
} notify_action_e_t;
# 105 "./include/pros/rtos.h"
typedef void* mutex_t;
# 125 "./include/pros/rtos.h"
uint32_t millis(void);
# 154 "./include/pros/rtos.h"
task_t task_create(task_fn_t function, void* const parameters, uint32_t prio, const uint16_t stack_depth,
                   const char* const name);
# 168 "./include/pros/rtos.h"
void task_delete(task_t task);
# 180 "./include/pros/rtos.h"
void task_delay(const uint32_t milliseconds);

void delay(const uint32_t milliseconds);
# 197 "./include/pros/rtos.h"
void task_delay_until(uint32_t* const prev_time, const uint32_t delta);
# 207 "./include/pros/rtos.h"
uint32_t task_get_priority(task_t task);
# 221 "./include/pros/rtos.h"
void task_set_priority(task_t task, uint32_t prio);
# 231 "./include/pros/rtos.h"
task_state_e_t task_get_state(task_t task);







void task_suspend(task_t task);







void task_resume(task_t task);
# 257 "./include/pros/rtos.h"
uint32_t task_get_count(void);
# 267 "./include/pros/rtos.h"
char* task_get_name(task_t task);
# 279 "./include/pros/rtos.h"
task_t task_get_by_name(const char* name);







task_t task_get_current();
# 300 "./include/pros/rtos.h"
uint32_t task_notify(task_t task);
# 326 "./include/pros/rtos.h"
uint32_t task_notify_ext(task_t task, uint32_t value, notify_action_e_t action, uint32_t* prev_value);
# 344 "./include/pros/rtos.h"
uint32_t task_notify_take(_Bool clear_on_exit, uint32_t timeout);
# 357 "./include/pros/rtos.h"
_Bool task_notify_clear(task_t task);
# 368 "./include/pros/rtos.h"
mutex_t mutex_create(void);
# 388 "./include/pros/rtos.h"
_Bool mutex_take(mutex_t mutex, uint32_t timeout);
# 403 "./include/pros/rtos.h"
_Bool mutex_give(mutex_t mutex);
# 56 "./include/api.h" 2
# 1 "./include/pros/vision.h" 1
# 38 "./include/pros/vision.h"
typedef enum vision_object_type {
 E_VISION_OBJECT_NORMAL = 0,
 E_VISION_OBJECT_COLOR_CODE = 1,
 E_VISION_OBJECT_LINE = 2
} vision_object_type_e_t;





typedef struct __attribute__((__packed__)) vision_signature {
 uint8_t id;
 uint8_t _pad[3];
 float range;
 int32_t u_min;
 int32_t u_max;
 int32_t u_mean;
 int32_t v_min;
 int32_t v_max;
 int32_t v_mean;
 uint32_t rgb;
 uint32_t type;
} vision_signature_s_t;




typedef uint16_t vision_color_code_t;





typedef struct __attribute__((__packed__)) vision_object {

 uint16_t signature;

 vision_object_type_e_t type;

 int16_t left_coord;

 int16_t top_coord;

 int16_t width;

 int16_t height;


 uint16_t angle;


 int16_t x_middle_coord;
 int16_t y_middle_coord;
} vision_object_s_t;

typedef enum vision_zero {
 E_VISION_ZERO_TOPLEFT = 0,
 E_VISION_ZERO_CENTER = 1
} vision_zero_e_t;
# 133 "./include/pros/vision.h"
int32_t vision_clear_led(uint8_t port);
# 159 "./include/pros/vision.h"
vision_signature_s_t vision_signature_from_utility(const int32_t id, const int32_t u_min, const int32_t u_max,
                                                   const int32_t u_mean, const int32_t v_min, const int32_t v_max,
                                                   const int32_t v_mean, const float range, const int32_t type);
# 188 "./include/pros/vision.h"
vision_color_code_t vision_create_color_code(uint8_t port, const uint32_t sig_id1, const uint32_t sig_id2,
                                             const uint32_t sig_id3, const uint32_t sig_id4, const uint32_t sig_id5);
# 210 "./include/pros/vision.h"
vision_object_s_t vision_get_by_size(uint8_t port, const uint32_t size_id);
# 233 "./include/pros/vision.h"
vision_object_s_t vision_get_by_sig(uint8_t port, const uint32_t size_id, const uint32_t sig_id);
# 255 "./include/pros/vision.h"
vision_object_s_t vision_get_by_code(uint8_t port, const uint32_t size_id, const vision_color_code_t color_code);
# 273 "./include/pros/vision.h"
int32_t vision_get_exposure(uint8_t port);
# 289 "./include/pros/vision.h"
int32_t vision_get_object_count(uint8_t port);
# 304 "./include/pros/vision.h"
int32_t vision_get_white_balance(uint8_t port);
# 314 "./include/pros/vision.h"
int32_t vision_print_signature(const vision_signature_s_t sig);
# 342 "./include/pros/vision.h"
int32_t vision_read_by_size(uint8_t port, const uint32_t size_id, const uint32_t object_count,
                            vision_object_s_t* const object_arr);
# 373 "./include/pros/vision.h"
int32_t vision_read_by_sig(uint8_t port, const uint32_t size_id, const uint32_t sig_id, const uint32_t object_count,
                           vision_object_s_t* const object_arr);
# 403 "./include/pros/vision.h"
int32_t vision_read_by_code(uint8_t port, const uint32_t size_id, const vision_color_code_t color_code,
                            const uint32_t object_count, vision_object_s_t* const object_arr);
# 416 "./include/pros/vision.h"
vision_signature_s_t vision_get_signature(uint8_t port, const uint8_t signature_id);
# 433 "./include/pros/vision.h"
int32_t vision_set_signature(uint8_t port, const uint8_t signature_id, vision_signature_s_t* const signature_ptr);
# 451 "./include/pros/vision.h"
int32_t vision_set_auto_white_balance(uint8_t port, const uint8_t enable);
# 471 "./include/pros/vision.h"
int32_t vision_set_exposure(uint8_t port, const uint8_t exposure);
# 489 "./include/pros/vision.h"
int32_t vision_set_led(uint8_t port, const int32_t rgb);
# 507 "./include/pros/vision.h"
int32_t vision_set_white_balance(uint8_t port, const int32_t rgb);
# 529 "./include/pros/vision.h"
int32_t vision_set_zero_point(uint8_t port, vision_zero_e_t zero_point);
# 547 "./include/pros/vision.h"
int32_t vision_set_wifi_mode(uint8_t port, const uint8_t enable);
# 57 "./include/api.h" 2
# 38 "include/main.h" 2
# 65 "include/main.h"
void autonomous(void);
void initialize(void);
void disabled(void);
void competition_initialize(void);
void opcontrol(void);
