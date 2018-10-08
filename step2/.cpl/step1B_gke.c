/**/

#define _GNU_SOURCE
#define _FILE_OFFSET_BITS 64
#define _LARGE_FILES
#define printERR fprintf(stderr,"\r%s: PROGRAM HALTED  \n",errormessage);fflush(stderr)




#include <unistd.h>

#include <stdlib.h>
/*** typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__))); ununderstood ***/
/*** typedef __float128 _Float128; ununderstood ***/
/*** extern _Float128 strtof128 (const char *restrict __nptr,
			 char **restrict __endptr) ununderstood ***/
/*** extern _Float128 strtof128_l (const char *restrict __nptr,
			 char **restrict __endptr,
			 locale_t __loc) ununderstood ***/

#include <stdio.h>

#include <fcntl.h>

#include <math.h>
/*** enum ununderstood ***/
/*** {
 FP_INT_UPWARD =
0,
 FP_INT_DOWNWARD =
1,
 FP_INT_TOWARDZERO =
2,
 FP_INT_TONEARESTFROMZERO =
3,
 FP_INT_TONEAREST =
4,
 }; ununderstood ***/
/*** __DECL_SIMD_ cos     extern double  cos      (double __x) ;  extern double  __cos      (double __x) ; ununderstood ***/
/*** __DECL_SIMD_ sin     extern double  sin      (double __x) ;  extern double  __sin      (double __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincos    extern void   sincos    ununderstood ***/
/*** (double __x, double *__sinx, double *__cosx) ;  extern void  __ sincos    ununderstood ***/
/*** (double __x, double *__sinx, double *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ exp     extern double  exp      (double __x) ;  extern double  __exp      (double __x) ; ununderstood ***/
/*** __DECL_SIMD_ log     extern double  log      (double __x) ;  extern double  __log      (double __x) ; ununderstood ***/
/*** __DECL_SIMD_ pow     extern double  pow      (double __x, double __y) ;  extern double  __pow      (double __x, double __y) ; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** __DECL_SIMD_ cosf     extern float  cosf      (float __x) ;  extern float  __cosf      (float __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf     extern float  sinf      (float __x) ;  extern float  __sinf      (float __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf    extern void   sincosf    ununderstood ***/
/*** (float __x, float *__sinx, float *__cosx) ;  extern void  __ sincosf    ununderstood ***/
/*** (float __x, float *__sinx, float *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf     extern float  expf      (float __x) ;  extern float  __expf      (float __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf     extern float  logf      (float __x) ;  extern float  __logf      (float __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf     extern float  powf      (float __x, float __y) ;  extern float  __powf      (float __x, float __y) ; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** __DECL_SIMD_ cosl     extern long double  cosl      (long double __x) ;  extern long double  __cosl      (long double __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinl     extern long double  sinl      (long double __x) ;  extern long double  __sinl      (long double __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosl    extern void   sincosl    ununderstood ***/
/*** (long double __x, long double *__sinx, long double *__cosx) ;  extern void  __ sincosl    ununderstood ***/
/*** (long double __x, long double *__sinx, long double *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expl     extern long double  expl      (long double __x) ;  extern long double  __expl      (long double __x) ; ununderstood ***/
/*** __DECL_SIMD_ logl     extern long double  logl      (long double __x) ;  extern long double  __logl      (long double __x) ; ununderstood ***/
/*** __DECL_SIMD_ powl     extern long double  powl      (long double __x, long double __y) ;  extern long double  __powl      (long double __x, long double __y) ; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** __DECL_SIMD_ cosf32     extern _Float32  cosf32      (_Float32 __x) ;  extern _Float32  __cosf32      (_Float32 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf32     extern _Float32  sinf32      (_Float32 __x) ;  extern _Float32  __sinf32      (_Float32 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf32    extern void   sincosf32    ununderstood ***/
/*** (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ;  extern void  __ sincosf32    ununderstood ***/
/*** (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf32     extern _Float32  expf32      (_Float32 __x) ;  extern _Float32  __expf32      (_Float32 __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf32     extern _Float32  logf32      (_Float32 __x) ;  extern _Float32  __logf32      (_Float32 __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf32     extern _Float32  powf32      (_Float32 __x, _Float32 __y) ;  extern _Float32  __powf32      (_Float32 __x, _Float32 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** __DECL_SIMD_ cosf64     extern _Float64  cosf64      (_Float64 __x) ;  extern _Float64  __cosf64      (_Float64 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf64     extern _Float64  sinf64      (_Float64 __x) ;  extern _Float64  __sinf64      (_Float64 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf64    extern void   sincosf64    ununderstood ***/
/*** (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ;  extern void  __ sincosf64    ununderstood ***/
/*** (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf64     extern _Float64  expf64      (_Float64 __x) ;  extern _Float64  __expf64      (_Float64 __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf64     extern _Float64  logf64      (_Float64 __x) ;  extern _Float64  __logf64      (_Float64 __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf64     extern _Float64  powf64      (_Float64 __x, _Float64 __y) ;  extern _Float64  __powf64      (_Float64 __x, _Float64 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128  acosf128    (_Float128 __x) ;  extern _Float128  __acosf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  asinf128    (_Float128 __x) ;  extern _Float128  __asinf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  atanf128    (_Float128 __x) ;  extern _Float128  __atanf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  atan2f128    (_Float128 __y, _Float128 __x) ;  extern _Float128  __atan2f128    (_Float128 __y, _Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ cosf128     extern _Float128  cosf128      (_Float128 __x) ;  extern _Float128  __cosf128      (_Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf128     extern _Float128  sinf128      (_Float128 __x) ;  extern _Float128  __sinf128      (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  tanf128    (_Float128 __x) ;  extern _Float128  __tanf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  coshf128    (_Float128 __x) ;  extern _Float128  __coshf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  sinhf128    (_Float128 __x) ;  extern _Float128  __sinhf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  tanhf128    (_Float128 __x) ;  extern _Float128  __tanhf128    (_Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf128    extern void   sincosf128    ununderstood ***/
/*** (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) ;  extern void  __ sincosf128    ununderstood ***/
/*** (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) ; ununderstood ***/
/*** extern _Float128  acoshf128    (_Float128 __x) ;  extern _Float128  __acoshf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  asinhf128    (_Float128 __x) ;  extern _Float128  __asinhf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  atanhf128    (_Float128 __x) ;  extern _Float128  __atanhf128    (_Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ expf128     extern _Float128  expf128      (_Float128 __x) ;  extern _Float128  __expf128      (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  frexpf128    (_Float128 __x, int *__exponent) ;  extern _Float128  __frexpf128    (_Float128 __x, int *__exponent) ; ununderstood ***/
/*** extern _Float128  ldexpf128    (_Float128 __x, int __exponent) ;  extern _Float128  __ldexpf128    (_Float128 __x, int __exponent) ; ununderstood ***/
/*** __DECL_SIMD_ logf128     extern _Float128  logf128      (_Float128 __x) ;  extern _Float128  __logf128      (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  log10f128    (_Float128 __x) ;  extern _Float128  __log10f128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  modff128    (_Float128 __x, _Float128 *__iptr) ;  extern _Float128  __modff128    (_Float128 __x, _Float128 *__iptr)  ; ununderstood ***/
/*** extern _Float128  exp10f128    (_Float128 __x) ;  extern _Float128  __exp10f128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  expm1f128    (_Float128 __x) ;  extern _Float128  __expm1f128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  log1pf128    (_Float128 __x) ;  extern _Float128  __log1pf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  logbf128    (_Float128 __x) ;  extern _Float128  __logbf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  exp2f128    (_Float128 __x) ;  extern _Float128  __exp2f128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  log2f128    (_Float128 __x) ;  extern _Float128  __log2f128    (_Float128 __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf128     extern _Float128  powf128      (_Float128 __x, _Float128 __y) ;  extern _Float128  __powf128      (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  sqrtf128    (_Float128 __x) ;  extern _Float128  __sqrtf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  hypotf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __hypotf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  cbrtf128    (_Float128 __x) ;  extern _Float128  __cbrtf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  ceilf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __ceilf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fabsf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __fabsf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  floorf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __floorf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fmodf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __fmodf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128  copysignf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __copysignf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  nanf128    (const char *__tagb) ;  extern _Float128  __nanf128    (const char *__tagb) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128  j0f128    (_Float128) ;  extern _Float128  __j0f128    (_Float128) ; ununderstood ***/
/*** extern _Float128  j1f128    (_Float128) ;  extern _Float128  __j1f128    (_Float128) ; ununderstood ***/
/*** extern _Float128  jnf128    (int, _Float128) ;  extern _Float128  __jnf128    (int, _Float128) ; ununderstood ***/
/*** extern _Float128  y0f128    (_Float128) ;  extern _Float128  __y0f128    (_Float128) ; ununderstood ***/
/*** extern _Float128  y1f128    (_Float128) ;  extern _Float128  __y1f128    (_Float128) ; ununderstood ***/
/*** extern _Float128  ynf128    (int, _Float128) ;  extern _Float128  __ynf128    (int, _Float128) ; ununderstood ***/
/*** extern _Float128  erff128    (_Float128) ;  extern _Float128  __erff128    (_Float128) ; ununderstood ***/
/*** extern _Float128  erfcf128    (_Float128) ;  extern _Float128  __erfcf128    (_Float128) ; ununderstood ***/
/*** extern _Float128  lgammaf128    (_Float128) ;  extern _Float128  __lgammaf128    (_Float128) ; ununderstood ***/
/*** extern _Float128  tgammaf128    (_Float128) ;  extern _Float128  __tgammaf128    (_Float128) ; ununderstood ***/
/*** extern _Float128  lgammaf128_r    (_Float128, int *__signgamp) ;  extern _Float128  __lgammaf128_r    (_Float128, int *__signgamp) ; ununderstood ***/
/*** extern _Float128  rintf128    (_Float128 __x) ;  extern _Float128  __rintf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  nextafterf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __nextafterf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  nextdownf128    (_Float128 __x) ;  extern _Float128  __nextdownf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  nextupf128    (_Float128 __x) ;  extern _Float128  __nextupf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  remainderf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __remainderf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  scalbnf128    (_Float128 __x, int __n) ;  extern _Float128  __scalbnf128    (_Float128 __x, int __n) ; ununderstood ***/
/*** extern _Float128  scalblnf128    (_Float128 __x, long int __n) ;  extern _Float128  __scalblnf128    (_Float128 __x, long int __n) ; ununderstood ***/
/*** extern _Float128  nearbyintf128    (_Float128 __x) ;  extern _Float128  __nearbyintf128    (_Float128 __x) ; ununderstood ***/
/*** extern _Float128  roundf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __roundf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  truncf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __truncf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  remquof128    (_Float128 __x, _Float128 __y, int *__quo) ;  extern _Float128  __remquof128    (_Float128 __x, _Float128 __y, int *__quo) ; ununderstood ***/
/*** extern _Float128  fdimf128    (_Float128 __x, _Float128 __y) ;  extern _Float128  __fdimf128    (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128  fmaxf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __fmaxf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fminf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __fminf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fmaf128    (_Float128 __x, _Float128 __y, _Float128 __z) ;  extern _Float128  __fmaf128    (_Float128 __x, _Float128 __y, _Float128 __z) ; ununderstood ***/
/*** extern _Float128  roundevenf128    (_Float128 __x)  __attribute__ (  (__const__));  extern _Float128  __roundevenf128    (_Float128 __x)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fmaxmagf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __fmaxmagf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  fminmagf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__));  extern _Float128  __fminmagf128    (_Float128 __x, _Float128 __y)  __attribute__ (  (__const__)); ununderstood ***/
/*** extern _Float128  getpayloadf128    (const _Float128 *__x) ;  extern _Float128  __getpayloadf128    (const _Float128 *__x) ; ununderstood ***/
/*** extern _Float128  scalbf128    (_Float128 __x, _Float128 __n) ;  extern _Float128  __scalbf128    (_Float128 __x, _Float128 __n) ; ununderstood ***/
/*** __DECL_SIMD_ cosf32x     extern _Float32x  cosf32x      (_Float32x __x) ;  extern _Float32x  __cosf32x      (_Float32x __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf32x     extern _Float32x  sinf32x      (_Float32x __x) ;  extern _Float32x  __sinf32x      (_Float32x __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf32x    extern void   sincosf32x    ununderstood ***/
/*** (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ;  extern void  __ sincosf32x    ununderstood ***/
/*** (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf32x     extern _Float32x  expf32x      (_Float32x __x) ;  extern _Float32x  __expf32x      (_Float32x __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf32x     extern _Float32x  logf32x      (_Float32x __x) ;  extern _Float32x  __logf32x      (_Float32x __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf32x     extern _Float32x  powf32x      (_Float32x __x, _Float32x __y) ;  extern _Float32x  __powf32x      (_Float32x __x, _Float32x __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** __DECL_SIMD_ cosf64x     extern _Float64x  cosf64x      (_Float64x __x) ;  extern _Float64x  __cosf64x      (_Float64x __x) ; ununderstood ***/
/*** __DECL_SIMD_ sinf64x     extern _Float64x  sinf64x      (_Float64x __x) ;  extern _Float64x  __sinf64x      (_Float64x __x) ; ununderstood ***/
/*** __DECL_SIMD_ sincosf64x    extern void   sincosf64x    ununderstood ***/
/*** (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ;  extern void  __ sincosf64x    ununderstood ***/
/*** (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ; ununderstood ***/
/*** __DECL_SIMD_ expf64x     extern _Float64x  expf64x      (_Float64x __x) ;  extern _Float64x  __expf64x      (_Float64x __x) ; ununderstood ***/
/*** __DECL_SIMD_ logf64x     extern _Float64x  logf64x      (_Float64x __x) ;  extern _Float64x  __logf64x      (_Float64x __x) ; ununderstood ***/
/*** __DECL_SIMD_ powf64x     extern _Float64x  powf64x      (_Float64x __x, _Float64x __y) ;  extern _Float64x  __powf64x      (_Float64x __x, _Float64x __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/

#include <limits.h>

#include <float.h>

#include <string.h>


#include <sys/time.h>
/*** typedef struct timezone *restrict __timezone_ptr_t; ununderstood ***/

#include <sys/types.h>

#include <setjmp.h>

#include <errno.h>

#include <signal.h>
#if defined nofenv
  #define feenableexcept(fpe)
  #define feclearexcept(fpe)
#else
  #include <fenv.h>
  #define fpe FE_INVALID | FE_OVERFLOW | FE_DIVBYZERO
#endif

char errortemp_[(80+1)];


struct arrptr{int l,h; ssize_t i; char *a;};
struct dynptr{void* p; int t;};
char INTERRUPT=0;
void (*traphandler)(const char *);
struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};
struct freefunc *freestack;
#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}
#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name
void traprestore(void *ptr){traphandler=ptr;}
void condfree(void *ptr){if(ptr)free(ptr);}
int dynptrerr(int type){
  snprintf(errortemp_,sizeof(errortemp_),"Argument of incompatible TYPE %d",type);
  traphandler(errortemp_);
}
void *errmalloc(){
  traphandler("Not enough memory");
}
void ioerr(FILE *fil){
  char where[11];
  off_t cn;
  int fn;
  fn=fileno(fil);
  cn=ftello(fil);
  if(ferror(fil)){
    snprintf(errortemp_,sizeof(errortemp_),"%s in fd %d char %ld",strerror(errno),fn,(long)cn);
  } else if(feof(fil)){
    snprintf(errortemp_,sizeof(errortemp_),"End of file in fd %d char %ld",fn,(long)cn);
  } else {
    if(cn>=0) fscanf(fil,"%10s",where); else where[0]=0;
    snprintf(errortemp_,sizeof(errortemp_),"Unrecognized input \"%s\" from fd %d char %ld",where,fn,(long)cn);
  }
  traphandler(errortemp_);
}
void errfclose(void *voidf){
  FILE **f=(FILE **)voidf;
  int fn;
  if(*f==NULL)return;
  fn=fileno(*f);
  if(fn>=0 && ftell(*f)>=0 && fclose(*f)!=0){
    snprintf(errortemp_,sizeof(errortemp_),"Error in closing fd %d: %s",fn,strerror(errno));
    traphandler(errortemp_);
    }
  *f=NULL;
}
void errfopen(FILE **f, const char *name, int mode){
  int fd;
  if(*f)errfclose(f);
  fd=open(name,mode,0666);
  if(fd>0 || mode==O_RDONLY){
    *f=fdopen(fd,mode==O_RDONLY?"r":"r+");
    if(*f!=NULL || mode==O_RDONLY)return;
    } 
  snprintf(errortemp_,sizeof(errortemp_),"Error in opening %s: %s",name,strerror(errno));
  traphandler(errortemp_);
}
int scanrec(FILE *f, const char *format, void *var) {
  off_t pos; int res;
  register int c;
  pos=ftello(f);
  while(!feof(f)&&(c=getc(f))<=' '&&(c!='\n')){};
  if(c!='\n')ungetc(c,f);
  while((c=getc(f))=='!') {while(!feof(f)&&getc(f)!='\n'){};};
  ungetc(c,f);
  res=fscanf(f,format,var);
  if (res<=0) fseeko(f,pos,SEEK_SET);
  return res;
}
int myfgets(char *name, char *var, char *varend, FILE *f) {
  off_t pos;
  register int c;
  pos=ftello(f);
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  if(var<varend){
    do{c=getc(f); *var=c;}while(c!=EOF && c!='\n' && ++var < varend);
    *var=0;
  }
  return 1;
}
int mygetline(char *name, char **var, FILE *f) {
  off_t pos;
  int c,oldc;
  pos=ftello(f);
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  c=32; oldc=0;
  while(1){
  *var=realloc(*var,c);
  if (fgets(*var+oldc,c,f)==NULL) {fseeko(f,pos,SEEK_SET);return 0;};
  {char* c1=strchr(*var,'\n'); if(c1) {*c1=0; return 1;}}
  oldc=c; c=2*c;
  }
  /*
  c=0;
  getline(var,&c,f);
  {char* c1=strchr(*var,'\n'); if(c1) *c1=0;}
  return 1;
  */
}
void trapsignal(int signum){
  if(signum==SIGINT) traphandler(&INTERRUPT); else {
    feclearexcept(fpe);
/* #if defined __linux__ */
    traphandler(strsignal(signum));
/*
#else
    snprintf(errortemp_,sizeof(errortemp_),"SIGNAL %d",signum);
    traphandler(errortemp_);
#endif
*/
  }
}
#if (defined __i386__ || defined __x86_64__)
#define mmovefrom(var,buf,type) *(type *)(buf)=*var
#define mmoveto(var,buf,type) *var=*(type *)(buf)
#else
#define mmovefrom(var,buf,type) memmove(buf,var,sizeof(type))
#define mmoveto(var,buf,type) memmove(var,buf,sizeof(type))
#endif
#define mainstart \
void default_traphandler(const char *errormessage){ \
  freemem(NULL); \
  if(errormessage[0]){ \
    printERR; \
    exit(EXIT_FAILURE); \
  }else exit(EXIT_SUCCESS); \
} \
int main(int argc, char **argv){ \
struct freefunc* es; \
{void (*sig)(int); \
if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); \
if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); \
if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); \
if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); \
else {traphandler=default_traphandler; \
      freestack=NULL; \
      feenableexcept(fpe); \
     }; \
} \
es=freestack;







/*! INTEGER LIBRARY FUNCTION INTEGER[(int)rint](REAL x)*/
/*! INTEGER LIBRARY FUNCTION int[(int)](REAL x)*/





/*!( to-do list
1) modificare STRUCTURED ARRAY in modo da evitare malloc quando possibile
2) separare il #define CPL da quello C
!)*/
/*! */
/*! Computes the source term, space and scale flux*/
/*! in the generalized Kolmogorov equation specialized*/
/*! for channel flow, as in Marati, Casciola, Piva, JFM 2004,*/
/*! equation 3.4 and following definitions.*/
/*! */
/*! This program IS parallel*/
/*!  */

/*!USE rtchecks*/
/*! */
/*! Data structures for the parallel computation */
/*! of the Generalized Kolmogorov Equation (GKE)*/
/*!*/
/*! Copyright (C) 2018  Dr. Davide Gatti*/
/*!*/
/*! This program is free software: you can redistribute it and/or modify*/
/*! it under the terms of the GNU General Public License as published by*/
/*! the Free Software Foundation, either version 3 of the License, or*/
/*! any later version.*/
/*!*/
/*! This program is distributed in the hope that it will be useful,*/
/*! but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*! GNU General Public License for more details.*/
/*!*/
/*! You should have received a copy of the GNU General Public License*/
/*! along with this program.  If not, see <https://www.gnu.org/licenses/>.*/
/*!*/
/*! Contacts:*/
/*!*/
/*! Dr. Davide Gatti  */
/*! davide.gatti [at] kit.edu*/
/*! msc.davide.gatti [at] gmail.com*/
/*! */
/*! Karlsruhe Institute of Technology*/
/*! Institute of Fluid Dynamics*/
/*! KaiserstraCe 10*/
/*! 76131 Karlsruhe */
/*! */

struct COMPLEX_{double REAL_;double IMAG_;};void complex_1INV(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_2EXP(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_3SINH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_4COSH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_5TANH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_6COTH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_7LOG(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_8POWER(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG,double y_REAL,double y_IMAG);
void complex_9SQRT(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_10ACOS(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_11CRAND(struct COMPLEX_ *RESULT_);
void complex_12CGAUSS(struct COMPLEX_ *RESULT_);


void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

int fft_9FFTfit(int N_);
void fft_fft_10ReverseInc(int *K_,int N_);
extern int fft_fft_LASTN;
extern struct arrptr fft_fft_CEXP;
extern struct arrptr fft_fft_tempVEC;
extern struct arrptr fft_fft_RI;
extern char *fft_fft_RI2;
extern char *fft_fft_RI3;
void fft_fft_11SETUP(int N_);
extern double fft_fft_12C3;
/*C3=fft_fft_12C3*/
void fft_fft_13BTFLY(int N_,int M_);
void fft_fft_14BTFLYI(int N_);
void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
double *fft_15REALIFIED(const int x_l,const int x_h,const ssize_t x_i,char *x__,int y_);

double DotProduct(const int a_l,const int a_h,const ssize_t a_i,char *a__,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void rbmat_1LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___);
struct REALINVMAT_{int lo_;int hi_;};void rbmat_2MatEqu(const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,char *c___,double a_);
void rbmat_3MatEqu(FILE *c_f,const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,off_t c___,double a_);
void rbmat_4LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void rbmat_5RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,FILE *B_f,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,off_t B___);
void rbmat_6LUdecomp(const int AA_l,const int AA_h,const ssize_t AA_i,const int AA__l,const int AA__h,const ssize_t AA__i,char *AA___);
void rbmat_7LUdecomp(FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);
void rbmat_8LeftLDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_9LeftUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_10LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_11RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___);
void rbmat_12RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);
extern double Lanczos_norm_;
void rbmat_13Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,void (*A_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),void (*AT_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),const int y1_l,const int y1_h,const ssize_t y1_i,char *y1__,double eps_);
void rbmat_14PLU(const int m_l,const int m_h,const ssize_t m_i,const int m__l,const int m__h,const ssize_t m__i,char *m___,struct REALINVMAT_ *RESULT_);
void rbmat_15LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,struct REALINVMAT_ *m_,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_16RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,struct REALINVMAT_ *m_);
void rbmat_17INV(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int RESULT_l,const int RESULT_h,const ssize_t RESULT_i,const int RESULT__l,const int RESULT__h,const ssize_t RESULT__i,char *RESULT___);
double rbmat_18DET(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___);
void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);

struct rbmat_Lanczos_R_s20 {int l,h; ssize_t i;struct arrptr a;};
extern struct rbmat_Lanczos_R_s20 rbmat_Lanczos_R_Lanczos_mat;
void rbmat_Lanczos_R_21A(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);
void rbmat_Lanczos_R_22AT(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);
void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);


#include <sys/mman.h>

#include <sys/wait.h>

#include <sys/shm.h>


#define SHMPAGE 4194304
extern size_t shmavail;extern char *shmaddr;extern void *shmalloc(size_t size);extern sigset_t oldmask;extern void donothing(int signum);extern void setup_signal_USR1();


#include <sys/socket.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <netdb.h>
extern int tcpserver(uint16_t port)
;extern int tcpclient(const char *hostname, uint16_t port) 
;extern int udpsocket(uint16_t myport, const char *hostname, uint16_t hostport) 
;

void barrier_free(void * ptr);
extern struct freefunc barrier_f;extern volatile int *barrier_;


/*! Parameters*/
/*! -----------------------------*/
/*nsmp=32*/
/*nfmin=20*/
/*nfmax=36*/
/*dn=2*/
char* path_;
extern double gkedata_1uLx1;
/*uLx1=gkedata_1uLx1*/
/*uLx2=0.5*/
/*uLz1=gkedata_1uLx1*/
/*uLz2=0.5*/
extern int nftot_;
extern int ismp_;
extern int iproc_;
extern int nproc_;
/*bufsize=800*/
/*baseport=(IPPORT_USERRESERVED+111)*/
extern struct freefunc prev_f;extern FILE *prev_;
extern struct freefunc next_f;extern FILE *next_;
extern int ny_;
extern int nx_;
extern int nz_;
extern double alfa0_;
extern double beta0_;
extern double a_;
extern double ymin_;
extern double ymax_;
extern double t_max_;
extern double dt_field_;
extern double dt_save_;
extern double u_conv_;
extern double u0_;
extern double un_;
extern double w_conv_;
extern double w0_;
extern double wn_;
extern double t0_;
extern double tn_;
extern double ni_;
extern double pr_;
extern double gr_;
extern double meanpx_;
extern double meanpz_;
extern double meanflowx_;
extern double meanflowz_;
extern double px_;
extern double corrpx_;
extern double pz_;
extern double corrpz_;
extern double flowx_;
extern double flowz_;
extern double deltat_;
extern double cflmax_;
extern double time_;
extern int time_from_restart_;
extern struct freefunc restart_file_f;extern char *restart_file_;
extern struct freefunc in_data_f;extern FILE *in_data_;
char c;
extern int gkedata_2h;
extern ssize_t gkedata_3i;
extern ssize_t gkedata_4st;
extern struct freefunc y_f;extern char *y_;
extern ssize_t gkedata_6st;
struct gkedata_s5{char d1_[(ssize_t)sizeof(double)*(2-(-2)+1)];char d2_[(ssize_t)sizeof(double)*(2-(-2)+1)];};extern int gkedata_7h;
extern ssize_t gkedata_8i;
extern ssize_t gkedata_9st;
extern struct freefunc derivs_f;extern char *derivs_;
extern int gkedata_12nyl;
/*nyl=gkedata_12nyl*/
extern int gkedata_13nyh;
/*nyh=gkedata_13nyh*/
extern int nxd_;
extern int nzd_;
extern int gkedata_14l;
extern int gkedata_15h;
extern ssize_t gkedata_16i;
extern ssize_t gkedata_17st;
extern struct freefunc izdV_f;extern char *izdV_;
extern int gkedata_18nxc;
/*nxc=gkedata_18nxc*/
extern int gkedata_19nzc;
/*nzc=gkedata_19nzc*/
extern double gkedata_20dx;
/*dx=gkedata_20dx*/
extern double gkedata_21dz;
/*dz=gkedata_21dz*/
struct GKETERMS_{char phiR_[(ssize_t)sizeof(double)*3];double phiC_;double scaleENER_;double scalePROD_;};struct MEANTERMS_{double U_;double W_;double Uy_;double Wy_;double Uyy_;double Wyy_;double P_;};struct MKETERMS_{double pump_;double produv_;double prodvw_;double ttrsp_;double vdiff_;double dissU_;double dissW_;double PHIttrsp_;double PHIvdiff_;};struct BALANCE_{char var_[(ssize_t)sizeof(double)*6];char prod_[(ssize_t)sizeof(double)*6];char psdiss_[(ssize_t)sizeof(double)*6];char ttrsp_[(ssize_t)sizeof(double)*6];char vdiff_[(ssize_t)sizeof(double)*6];char pstrain_[(ssize_t)sizeof(double)*6];char ptrsp_[(ssize_t)sizeof(double)*6];char PHIttrsp_[(ssize_t)sizeof(double)*6];char PHIvdiff_[(ssize_t)sizeof(double)*6];char PHIptrsp_[(ssize_t)sizeof(double)*6];};void mean_free(void * ptr);
extern struct freefunc mean_f;extern char *mean_;
void uiuj_free(void * ptr);
extern struct freefunc uiuj_f;extern char *uiuj_;
extern int gkedata_24h;
extern int gkedata_25l;
extern int gkedata_26h;
extern ssize_t gkedata_27i;
extern ssize_t gkedata_28i;
extern ssize_t gkedata_29st;
void p_free(void * ptr);
extern struct freefunc p_f;extern char *p_;
extern int gkedata_30h;
extern int gkedata_31l;
extern int gkedata_32h;
extern ssize_t gkedata_33i;
extern ssize_t gkedata_34i;
extern ssize_t gkedata_35st;
void V_free(void * ptr);
extern struct freefunc V_f;extern char *V_;
extern int gkedata_36h;
extern int gkedata_37h;
extern int gkedata_38l;
extern int gkedata_39h;
extern ssize_t gkedata_40i;
extern ssize_t gkedata_41i;
extern ssize_t gkedata_42i;
extern ssize_t gkedata_43st;
extern ssize_t gkedata_44st;
void Vtot_free(void * ptr);
extern struct freefunc Vtot_f;extern char *Vtot_;
extern int gkedata_45h;
extern int gkedata_46h;
extern int gkedata_47l;
extern int gkedata_48h;
extern ssize_t gkedata_49i;
extern ssize_t gkedata_50i;
extern ssize_t gkedata_51i;
extern ssize_t gkedata_52st;
extern ssize_t gkedata_53st;
void ptot_free(void * ptr);
extern struct freefunc ptot_f;extern char *ptot_;
extern int gkedata_54h;
extern int gkedata_55h;
extern ssize_t gkedata_56i;
extern ssize_t gkedata_57i;
void Vd_free(void * ptr);
extern struct freefunc Vd_f;extern char *Vd_;
extern int gkedata_58h;
extern int gkedata_59h;
extern ssize_t gkedata_60i;
extern ssize_t gkedata_61i;
void VVd_free(void * ptr);
extern struct freefunc VVd_f;extern char *VVd_;
extern int gkedata_62h;
extern int gkedata_63l;
extern int gkedata_64h;
extern ssize_t gkedata_65i;
extern ssize_t gkedata_66i;
extern ssize_t gkedata_67st;
void bufV_free(void * ptr);
extern struct freefunc bufV_f;extern char *bufV_;
extern int gkedata_68h;
extern int gkedata_69l;
extern int gkedata_70h;
extern ssize_t gkedata_71i;
extern ssize_t gkedata_72i;
extern ssize_t gkedata_73st;
void bufp_free(void * ptr);
extern struct freefunc bufp_f;extern char *bufp_;
extern int gkedata_74h;
extern int gkedata_75h;
extern int gkedata_76l;
extern int gkedata_77h;
extern off_t gkedata_78i;
extern off_t gkedata_79i;
extern off_t gkedata_81i;
extern off_t gkedata_82i;
extern off_t gkedata_83i;
extern off_t gkedata_84st;
extern off_t gkedata_85st;
struct gkedata_s80{char header_[(1023+1)];};extern struct freefunc diskimage_f;extern FILE *diskimage_;
extern int gkedata_86h;
extern int gkedata_87h;
extern int gkedata_88l;
extern int gkedata_89h;
extern off_t gkedata_90i;
extern off_t gkedata_91i;
extern struct freefunc pressuredata_f;extern FILE *pressuredata_; 
extern int gkedata_92h;
extern int gkedata_93h;
extern int gkedata_94h;
extern off_t gkedata_96i;
extern off_t gkedata_97st;
extern off_t gkedata_98i;
extern off_t gkedata_99st;
extern off_t gkedata_100i;
extern off_t gkedata_101st;
extern struct freefunc uiujimage_f;extern FILE *uiujimage_;
extern int mx_;
extern ssize_t gkedata_102i;
extern struct freefunc imx_f;extern char *imx_;
extern int mz_;
extern ssize_t gkedata_103i;
extern struct freefunc imz_f;extern char *imz_;
extern int gkedata_106h;
extern ssize_t gkedata_107i;
extern ssize_t gkedata_108st;
extern struct freefunc startpos_f;extern char *startpos_;
extern int gkedata_109h;
extern int gkedata_110h;
extern int gkedata_111h;
extern off_t gkedata_112i;
extern off_t gkedata_113i;
extern struct freefunc gkedata_f;extern FILE *gkedata_;
void gkedata_128convolutions(const int Vplane_l,const int Vplane_h,const ssize_t Vplane_i,const int Vplane__l,const int Vplane__h,const ssize_t Vplane__i,char *Vplane___,const int VVplane_l,const int VVplane_h,const ssize_t VVplane_i,const int VVplane__l,const int VVplane__h,const ssize_t VVplane__i,char *VVplane___);
void gkedata_129deriv2(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f2_l,const int f2_h,const ssize_t f2_i,char *f2__);
void gkedata_130deriv(const int f0_l,const int f0_h,const ssize_t f0_i,char *f0__,const int f1_l,const int f1_h,const ssize_t f1_i,char *f1__);
struct DERIVS_{struct COMPLEX_ ux_;struct COMPLEX_ uy_;struct COMPLEX_ uz_;struct COMPLEX_ vx_;struct COMPLEX_ vy_;struct COMPLEX_ vz_;struct COMPLEX_ wx_;struct COMPLEX_ wy_;struct COMPLEX_ wz_;};void gkedata_131velocity_gradient(const int Vder_l,const int Vder_h,const ssize_t Vder_i,const int Vder__l,const int Vder__h,const ssize_t Vder__i,const int Vder___l,const int Vder___h,const ssize_t Vder___i,char *Vder____);
double wallclock_1wallclock();

extern struct timeval wallclock_wallclock_startim;
double wallclock_1wallclock();
double t1_;
double t2_;
double t3_;
double t4_;



int step1B_gke_1h;
int step1B_gke_2h;
int step1B_gke_3h;
ssize_t step1B_gke_4i;
ssize_t step1B_gke_5i;
ssize_t step1B_gke_6i;
ssize_t step1B_gke_7st;
void gke_free(void * ptr){munmap((char*)ptr+step1B_gke_7st,step1B_gke_6i);}struct freefunc gke_f;char *gke_;

int step1B_gke_8h;
int step1B_gke_9h;
struct step1B_gke_s10{struct COMPLEX_ UU_;struct COMPLEX_ VV_;struct COMPLEX_ WW_;struct COMPLEX_ UV_;struct COMPLEX_ PV_;struct COMPLEX_ uuu_;struct COMPLEX_ uuv_;struct COMPLEX_ uuw_;struct COMPLEX_ vvu_;struct COMPLEX_ vvv_;struct COMPLEX_ vvw_;struct COMPLEX_ wwu_;struct COMPLEX_ wwv_;struct COMPLEX_ www_;struct COMPLEX_ uvu_;struct COMPLEX_ uvv_;struct COMPLEX_ uwu_;struct COMPLEX_ uww_;struct COMPLEX_ vwv_;struct COMPLEX_ vww_;};ssize_t step1B_gke_11i;
ssize_t step1B_gke_12i;
ssize_t step1B_gke_13i;
ssize_t step1B_gke_14i;
ssize_t step1B_gke_15st;
void R_free(void * ptr){munmap((char*)ptr+step1B_gke_15st,step1B_gke_14i);}struct freefunc R_f;char *R_;




/*! Compute Kolmogorov Equation*/
/*! -------------------------------*/
mainstart



fft: 

fft_fft_LASTN=1;fft_fft_12C3=sin(3.14159265358979323846/3.);
fft_exit:;





Lanczos_norm_=0.;

Lanczos_R: 
Lanczos_R_exit:;


setup_signal_USR1();


barrier_=mmap(NULL,(ssize_t)sizeof(volatile int),PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(barrier_==MAP_FAILED)errmalloc();atblockexit(barrier_f,barrier_free,(void*)barrier_);(*barrier_)=0;gkedata_1uLx1=200.0/1000.0;
nftot_=(((36-20) / 2))+1;ismp_=0;if( (argc-1)<1 ){ iproc_=1; nproc_=1 ;}else{
iproc_=atoi((void *)((*(char**)((ssize_t)sizeof(char*)+(char*)argv))));  nproc_=atoi((void *)((*(char**)(2*(ssize_t)sizeof(char*)+(char*)argv))));  };
prev_=NULL;atblockexit(prev_f,errfclose,&prev_);next_=NULL;atblockexit(next_f,errfclose,&next_);meanpx_=-99.;meanpz_=-99.;meanflowx_=-99.;meanflowz_=-99.;px_=0.;corrpx_=0.;pz_=0.;corrpz_=0.;flowx_=0.;flowz_=0.;deltat_=0.;cflmax_=0.;time_=0.;restart_file_=0;atblockexit(restart_file_f,condfree,restart_file_);in_data_=NULL;atblockexit(in_data_f,errfclose,&in_data_);errfopen(&in_data_,"dns.in",O_RDWR|O_CREAT);   if(!(scanrec( in_data_ ," ny = %d",&ny_)>0&&scanrec( in_data_ ," nx = %d",&nx_)>0&&scanrec( in_data_ ," nz = %d",&nz_)>0&&scanrec( in_data_ ," alfa0 = %lg",&alfa0_)>0&&scanrec( in_data_ ," beta0 = %lg",&beta0_)>0&&scanrec( in_data_ ," ymin = %lg",&ymin_)>0&&scanrec( in_data_ ," ymax = %lg",&ymax_)>0&&scanrec( in_data_ ," a = %lg",&a_)>0&&scanrec( in_data_ ," ni = %lg",&ni_)>0&&scanrec( in_data_ ," pr = %lg",&pr_)>0&&scanrec( in_data_ ," gr = %lg",&gr_)>0))ioerr( in_data_ );  ni_=1./ni_;  pr_=1./pr_; 
{do{  }while(   (scanrec( in_data_ ," meanpx = %lg",&meanpx_ )>0 ||scanrec( in_data_ ," meanflowx = %lg",&meanflowx_)>0));}
{do{  }while(   (scanrec( in_data_ ," meanpz = %lg",&meanpz_ )>0 ||scanrec( in_data_ ," meanflowz = %lg",&meanflowz_)>0));}
   if(!(scanrec( in_data_ ," u_conv = %lg",&u_conv_)>0 &&scanrec( in_data_ ," w_conv = %lg",&w_conv_)>0))ioerr( in_data_ );
   if(!(scanrec( in_data_ ," u0 = %lg",&u0_)>0 &&scanrec( in_data_ ," un = %lg",&un_)>0 &&scanrec( in_data_ ," w0 = %lg",&w0_)>0 &&scanrec( in_data_ ," wn = %lg",&wn_)>0 &&scanrec( in_data_ ," t0 = %lg",&t0_)>0 &&scanrec( in_data_ ," tn = %lg",&tn_)>0))ioerr( in_data_ );
{do{  }while(   (scanrec( in_data_ ," deltat = %lg",&deltat_ )>0 ||scanrec( in_data_ ," cflmax = %lg",&cflmax_)>0));}
   if(!(scanrec( in_data_ ," t_max = %lg",&t_max_)>0 &&(scanrec( in_data_ ," time_from_restart = %c%*4[A-Za-z] ",&c)&&((time_from_restart_=(c=='T')||(c=='Y')||(c=='t')||(c=='y'))||(c=='F')||(c=='N')||(c=='f')||(c=='n'))) &&scanrec( in_data_ ," dt_field = %lg",&dt_field_)>0 &&scanrec( in_data_ ," dt_save = %lg",&dt_save_)>0))ioerr( in_data_ );
if( !   (mygetline(" restart_file =",&restart_file_ , in_data_ ))){ if(restart_file_)free(restart_file_);restart_file_=strndup("",(int)(strlen("")-1)+1);};
errfclose(&in_data_);
if( (iproc_==nproc_) ){
     fprintf(stdout,"""nproc=""");fprintf(stdout,"%d",nproc_);fprintf(stdout,"\t");fprintf(stdout,"""nsmp=""");fprintf(stdout,"%d",32);putc('\n',stdout);
     fprintf(stdout,"""nx=""");fprintf(stdout,"%d",nx_);fprintf(stdout,"\t" );fprintf(stdout,"""nz=""");fprintf(stdout,"%d",nz_);fprintf(stdout,"\t" );fprintf(stdout,"""ny=""");fprintf(stdout,"%d",ny_);fprintf(stdout,"\t" );fprintf(stdout,"""time=""");fprintf(stdout,"%g",time_);putc('\n',stdout);
     fprintf(stdout,"""meanflowx=""");fprintf(stdout,"%g",meanflowx_);fprintf(stdout,"\t" );fprintf(stdout,"""meanpx=""");fprintf(stdout,"%g",meanpx_);fprintf(stdout,"\t" );fprintf(stdout,"""meanflowz=""");fprintf(stdout,"%g",meanflowz_);fprintf(stdout,"\t" );fprintf(stdout,"""meanpz=""");fprintf(stdout,"%g",meanpz_);putc('\n',stdout);
     fprintf(stdout,"""ymin=""");fprintf(stdout,"%g",ymin_);fprintf(stdout,"\t" );fprintf(stdout,"""ymax=""");fprintf(stdout,"%g",ymax_);fprintf(stdout,"\t" );fprintf(stdout,"""a=""");fprintf(stdout,"%g",a_);fprintf(stdout,"\t" );fprintf(stdout,"""alfa0=""");fprintf(stdout,"%g",alfa0_);fprintf(stdout,"\t" );fprintf(stdout,"""beta0=""");fprintf(stdout,"%g",beta0_);fprintf(stdout,"\t" );fprintf(stdout,"""1/ni=""");fprintf(stdout,"%g",1./ni_);fprintf(stdout,"\t" );fprintf(stdout,"""1/pr=""");fprintf(stdout,"%g",1./pr_);putc('\n',stdout);
     fprintf(stdout,"""u_conv=""");fprintf(stdout,"%g",u_conv_);fprintf(stdout,"\t" );fprintf(stdout,"""u0=""");fprintf(stdout,"%g",u0_);fprintf(stdout,"\t" );fprintf(stdout,"""un=""");fprintf(stdout,"%g",un_);fprintf(stdout,"\t" );fprintf(stdout,"""w_conv=""");fprintf(stdout,"%g",w_conv_);fprintf(stdout,"\t" );fprintf(stdout,"""w0=""");fprintf(stdout,"%g",w0_);fprintf(stdout,"\t" );fprintf(stdout,"""wn=""");fprintf(stdout,"%g",wn_);fprintf(stdout,"\t" );fprintf(stdout,"""t0=""");fprintf(stdout,"%g",t0_);fprintf(stdout,"\t" );fprintf(stdout,"""tn=""");fprintf(stdout,"%g",tn_);putc('\n',stdout);
     fprintf(stdout,"""deltat=""");fprintf(stdout,"%g",deltat_);fprintf(stdout,"\t" );fprintf(stdout,"""cflmax=""");fprintf(stdout,"%g",cflmax_);fprintf(stdout,"\t" );fprintf(stdout,"""t_max=""");fprintf(stdout,"%g",t_max_);fprintf(stdout,"\t" );fprintf(stdout,"""dt_save=""");fprintf(stdout,"%g",dt_save_);fprintf(stdout,"\t" );fprintf(stdout,"""dt_field=""");fprintf(stdout,"%g",dt_field_);putc('\n',stdout);
};

/*! Grid in y direction and finite differences operators*/
/*! -------------------------------------------*/
gkedata_2h=ny_+1;
gkedata_3i=(ssize_t)sizeof(double)*(gkedata_2h-(-1)+1);
gkedata_4st=(-1)*(ssize_t)sizeof(double);

y_=malloc(gkedata_3i);if(y_==NULL)errmalloc();y_-=gkedata_4st;atblockexit(y_f,free,y_+gkedata_4st);  {int i_=(-1);do{ /*!Channel*/{ (*(double *)(i_*(ssize_t)sizeof(double)+y_))=ymin_+0.5*(ymax_-ymin_)*(tanh(a_*((double)(2*i_)/(double)(ny_)-1.))/tanh(a_)+0.5*(ymax_-ymin_)) ;}i_++;}while(i_<=gkedata_2h);}
gkedata_6st=(-2)*(ssize_t)sizeof(double);
gkedata_7h=ny_+1;
gkedata_8i=(ssize_t)sizeof(struct gkedata_s5)*(gkedata_7h-(-1)+1);
gkedata_9st=(-1)*(ssize_t)sizeof(struct gkedata_s5);

derivs_=malloc(gkedata_8i);if(derivs_==NULL)errmalloc();derivs_-=gkedata_9st;atblockexit(derivs_f,free,derivs_+gkedata_9st); {int iy_= - 1  ;while(iy_<=ny_+1 ){{
  struct gkedata_s5 *gkedata_10w;
char matder_[(ssize_t)sizeof(double)*(4+1)*(4+1)];

  char tnder_[(ssize_t)sizeof(double)*(4+1)];

  int gkedata_11shift;
/*shift=gkedata_11shift*/

  gkedata_10w=(struct gkedata_s5 *)(iy_*(ssize_t)sizeof(struct gkedata_s5)+derivs_);
memset(matder_,0,(ssize_t)sizeof(double)*(4+1)*(4+1));memset(tnder_,0,(ssize_t)sizeof(double)*(4+1));gkedata_11shift=((iy_<1))*( - iy_+1) - ((iy_>(ny_-1)))*(iy_-ny_+1);
 {int ic_=0  ;do{ {int ir_=0  ;do{{  (*(double *)(ic_*(ssize_t)sizeof(double)+ir_*(ssize_t)sizeof(double)*(4+1)+matder_) )= pow(((*(double *)((iy_-2+ic_+gkedata_11shift)*(ssize_t)sizeof(double)+y_))-(*(double *)(iy_*(ssize_t)sizeof(double)+y_))),(4-ir_) );}ir_+=1;}while(ir_<=4);}ic_+=1;}while(ic_<=4 );}
  rbmat_6LUdecomp(0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),matder_);
  memset(gkedata_6st+(*gkedata_10w).d1_-gkedata_6st,0,(ssize_t)sizeof(double)*(2-(-2)+1));  memset(tnder_,0,(ssize_t)sizeof(double)*(4+1));   (*(double *)(3*(ssize_t)sizeof(double)+tnder_) )= 1.;
   {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*gkedata_10w).d1_-gkedata_6st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),0,4,(ssize_t)sizeof(double),(tnder_)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*gkedata_10w).d1_-gkedata_6st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*gkedata_10w).d1_-gkedata_6st ));};}
  memset(gkedata_6st+(*gkedata_10w).d2_-gkedata_6st,0,(ssize_t)sizeof(double)*(2-(-2)+1));  memset(tnder_,0,(ssize_t)sizeof(double)*(4+1));   (*(double *)(2*(ssize_t)sizeof(double)+tnder_) )= 2.;
   {{rbmat_8LeftLDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*gkedata_10w).d2_-gkedata_6st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),0,4,(ssize_t)sizeof(double),(tnder_)); rbmat_9LeftUDiv((1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*gkedata_10w).d2_-gkedata_6st ),0,4,(ssize_t)sizeof(double)*(4+1),0,4,(ssize_t)sizeof(double),(matder_),(1==0?INT_MIN:((-2)-(-2))),(1==0?INT_MAX:(2-(-2))),(ssize_t)sizeof(double),((-2)*(ssize_t)sizeof(double)+(*gkedata_10w).d2_-gkedata_6st ));};}
}iy_+=1;};}
gkedata_12nyl= - 1+((iproc_-1)*((ny_ / 2 )+2) / nproc_);
gkedata_13nyh=(iproc_*((ny_ / 2 )+2) / nproc_ )-2;
nxd_=(3*nx_ / 2 )- 1;{do{  nxd_ +=1;}while(!(fft_9FFTfit(nxd_)));}
nzd_=3*nz_ - 1;{do{  nzd_ +=1;}while(!(fft_9FFTfit(nzd_)));}
gkedata_14l= - nz_;
gkedata_15h=nz_;
gkedata_16i=(ssize_t)sizeof(int)*(gkedata_15h-gkedata_14l+1);
gkedata_17st=gkedata_14l*(ssize_t)sizeof(int);

izdV_=malloc(gkedata_16i);if(izdV_==NULL)errmalloc();izdV_-=gkedata_17st;atblockexit(izdV_f,free,izdV_+gkedata_17st);memset(gkedata_17st+izdV_,0,gkedata_16i); {int iz_= - nz_  ;do{{ (*(int *)(iz_*(ssize_t)sizeof(int)+izdV_))=( iz_>=0  ?iz_  :nzd_+iz_ );}iz_+=1;}while(iz_<=nz_);}
gkedata_18nxc=(2*nxd_);
gkedata_19nzc=nzd_;
gkedata_20dx=3.14159265358979323846/alfa0_/(double)(nxd_);
gkedata_21dz=2.*3.14159265358979323846/beta0_/(double)(nzd_);
if( (iproc_==nproc_) ){    fprintf(stdout,"""nxc=""");fprintf(stdout,"%d",gkedata_18nxc);fprintf(stdout,"\t");fprintf(stdout,"""nzc=""");fprintf(stdout,"%d",gkedata_19nzc);putc('\n',stdout);};

/*! Types*/
/*! -------------------------------------------*/

mean_=mmap(NULL,(ssize_t)sizeof(struct MEANTERMS_)*2,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(mean_==MAP_FAILED)errmalloc();mean_-=(ssize_t)sizeof(struct MEANTERMS_);atblockexit(mean_f,mean_free,(void*)mean_);
uiuj_=mmap(NULL,(ssize_t)sizeof(struct BALANCE_)*2,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(uiuj_==MAP_FAILED)errmalloc();uiuj_-=(ssize_t)sizeof(struct BALANCE_);atblockexit(uiuj_f,uiuj_free,(void*)uiuj_);gkedata_24h=nx_;
gkedata_25l= - nz_;
gkedata_26h=nz_;
gkedata_27i=(ssize_t)sizeof(struct COMPLEX_)*2*(gkedata_26h-gkedata_25l+1);
gkedata_28i=gkedata_27i*(gkedata_24h+1);
gkedata_29st=gkedata_25l*(ssize_t)sizeof(struct COMPLEX_)*2+(ssize_t)sizeof(struct COMPLEX_);

p_=mmap(NULL,gkedata_28i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(p_==MAP_FAILED)errmalloc();p_-=gkedata_29st;atblockexit(p_f,p_free,(void*)p_);memset(gkedata_29st+p_,0,gkedata_28i);gkedata_30h=nx_;
gkedata_31l= - nz_;
gkedata_32h=nz_;
gkedata_33i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2*(gkedata_32h-gkedata_31l+1);
gkedata_34i=gkedata_33i*(gkedata_30h+1);
gkedata_35st=gkedata_31l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2+(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1);

V_=mmap(NULL,gkedata_34i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(V_==MAP_FAILED)errmalloc();V_-=gkedata_35st;atblockexit(V_f,V_free,(void*)V_);memset(gkedata_35st+V_,0,gkedata_34i);gkedata_36h=ny_+1;
gkedata_37h=nx_;
gkedata_38l= - nz_;
gkedata_39h=nz_;
gkedata_40i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*(gkedata_39h-gkedata_38l+1);
gkedata_41i=gkedata_40i*(gkedata_37h+1);
gkedata_42i=gkedata_41i*(gkedata_36h-(-1)+1);
gkedata_43st=gkedata_38l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1);
gkedata_44st=(-1)*gkedata_41i+gkedata_43st;

Vtot_=mmap(NULL,gkedata_42i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(Vtot_==MAP_FAILED)errmalloc();Vtot_-=gkedata_44st;atblockexit(Vtot_f,Vtot_free,(void*)Vtot_);memset(gkedata_44st+Vtot_,0,gkedata_42i);gkedata_45h=ny_+1;
gkedata_46h=nx_;
gkedata_47l= - nz_;
gkedata_48h=nz_;
gkedata_49i=(ssize_t)sizeof(struct COMPLEX_)*(gkedata_48h-gkedata_47l+1);
gkedata_50i=gkedata_49i*(gkedata_46h+1);
gkedata_51i=gkedata_50i*(gkedata_45h-(-1)+1);
gkedata_52st=gkedata_47l*(ssize_t)sizeof(struct COMPLEX_);
gkedata_53st=(-1)*gkedata_50i+gkedata_52st;

ptot_=mmap(NULL,gkedata_51i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(ptot_==MAP_FAILED)errmalloc();ptot_-=gkedata_53st;atblockexit(ptot_f,ptot_free,(void*)ptot_);memset(gkedata_53st+ptot_,0,gkedata_51i);gkedata_54h=nxd_-1;
gkedata_55h=nzd_-1;
gkedata_56i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*(gkedata_55h+1);
gkedata_57i=gkedata_56i*(gkedata_54h+1);

Vd_=mmap(NULL,gkedata_57i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(Vd_==MAP_FAILED)errmalloc();atblockexit(Vd_f,Vd_free,(void*)Vd_);memset(Vd_,0,gkedata_57i);gkedata_58h=nxd_-1;
gkedata_59h=nzd_-1;
gkedata_60i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)*2*(gkedata_59h+1);
gkedata_61i=gkedata_60i*(gkedata_58h+1);

VVd_=mmap(NULL,gkedata_61i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(VVd_==MAP_FAILED)errmalloc();VVd_-=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1);atblockexit(VVd_f,VVd_free,(void*)VVd_);memset((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+VVd_,0,gkedata_61i);gkedata_62h=nx_;
gkedata_63l= - nz_;
gkedata_64h=nz_;
gkedata_65i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*(gkedata_64h-gkedata_63l+1);
gkedata_66i=gkedata_65i*(gkedata_62h+1);
gkedata_67st=gkedata_63l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1);

bufV_=mmap(NULL,gkedata_66i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(bufV_==MAP_FAILED)errmalloc();bufV_-=gkedata_67st;atblockexit(bufV_f,bufV_free,(void*)bufV_);memset(gkedata_67st+bufV_,0,gkedata_66i);gkedata_68h=nx_;
gkedata_69l= - nz_;
gkedata_70h=nz_;
gkedata_71i=(ssize_t)sizeof(struct COMPLEX_)*(gkedata_70h-gkedata_69l+1);
gkedata_72i=gkedata_71i*(gkedata_68h+1);
gkedata_73st=gkedata_69l*(ssize_t)sizeof(struct COMPLEX_);

bufp_=mmap(NULL,gkedata_72i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(bufp_==MAP_FAILED)errmalloc();bufp_-=gkedata_73st;atblockexit(bufp_f,bufp_free,(void*)bufp_);memset(gkedata_73st+bufp_,0,gkedata_72i);gkedata_74h=ny_+1;
gkedata_75h=nx_;
gkedata_76l= - nz_;
gkedata_77h=nz_;
gkedata_78i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*(gkedata_77h-gkedata_76l+1);
gkedata_79i=gkedata_78i*(gkedata_75h+1);
gkedata_81i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*(gkedata_77h-gkedata_76l+1);
gkedata_82i=gkedata_81i*(gkedata_75h+1);
gkedata_83i=gkedata_82i*(gkedata_74h-(-1)+1);
gkedata_84st=gkedata_76l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1);
gkedata_85st=(-1)*gkedata_79i+gkedata_84st;
diskimage_=NULL;atblockexit(diskimage_f,errfclose,&diskimage_);gkedata_86h=ny_+1;
gkedata_87h=nx_;
gkedata_88l= - nz_;
gkedata_89h=nz_;
gkedata_90i=(ssize_t)sizeof(struct COMPLEX_)*(gkedata_89h-gkedata_88l+1);
gkedata_91i=gkedata_90i*(gkedata_87h+1);
pressuredata_=NULL;atblockexit(pressuredata_f,errfclose,&pressuredata_);gkedata_92h=ny_+1;
gkedata_93h=ny_+1;
gkedata_94h=ny_+1;
gkedata_96i=(ssize_t)sizeof(struct MEANTERMS_)*(gkedata_92h-(-1)+1);
gkedata_97st=(-1)*(ssize_t)sizeof(struct MEANTERMS_);
gkedata_98i=(ssize_t)sizeof(struct MKETERMS_)*(gkedata_93h-(-1)+1);
gkedata_99st=(-1)*(ssize_t)sizeof(struct MKETERMS_);
gkedata_100i=(ssize_t)sizeof(struct BALANCE_)*(gkedata_94h-(-1)+1);
gkedata_101st=(-1)*(ssize_t)sizeof(struct BALANCE_);
uiujimage_=NULL;atblockexit(uiujimage_f,errfclose,&uiujimage_);mx_=0;gkedata_102i=(ssize_t)sizeof(int)*(gkedata_18nxc+1);

imx_=malloc(gkedata_102i);if(imx_==NULL)errmalloc();atblockexit(imx_f,free,imx_);memset(imx_,0,gkedata_102i);mz_=0;gkedata_103i=(ssize_t)sizeof(int)*(gkedata_19nzc+1);

imz_=malloc(gkedata_103i);if(imz_==NULL)errmalloc();atblockexit(imz_f,free,imz_);memset(imz_,0,gkedata_103i);{
  int ix_;

  int iz_;

  ix_=0;while( ix_<(gkedata_18nxc / 2)){
    (*(int *)(mx_*(ssize_t)sizeof(int)+imx_))=ix_;  mx_+=1;  ix_+=(( (double)(ix_)*gkedata_20dx<=gkedata_1uLx1  ?1  :(( (double)(ix_)*gkedata_20dx<=0.5  ?4  :8))));
  }
  if( (*(int *)((mx_-1)*(ssize_t)sizeof(int)+imx_))<(gkedata_18nxc / 2 )){ (*(int *)(mx_*(ssize_t)sizeof(int)+imx_))=(gkedata_18nxc / 2); mx_+=1;};
   {int i_=1  ;do{{ register int md104;
(*(int *)((mx_+i_-1)*(ssize_t)sizeof(int)+imx_))=(md104=(2*nxd_-(*(int *)((mx_-i_-1)*(ssize_t)sizeof(int)+imx_))) % (2*nxd_)  ,md104>=0?md104:md104+(2*nxd_)  );}i_+=1;}while(i_<=mx_-2);}   mx_ = 2*mx_ -2;
  iz_=0;while( iz_<(gkedata_19nzc / 2)){
    (*(int *)(mz_*(ssize_t)sizeof(int)+imz_))=iz_;  mz_+=1;  iz_+=(( (double)(iz_)*gkedata_21dz<=gkedata_1uLx1  ?1  :(( (double)(iz_)*gkedata_21dz<=0.5  ?4  :8))));
  }
  if( (*(int *)((mz_-1)*(ssize_t)sizeof(int)+imz_))<(gkedata_19nzc / 2 )){ (*(int *)(mz_*(ssize_t)sizeof(int)+imz_))=(gkedata_19nzc / 2); mz_+=1;};
   {int i_=1  ;do{{ register int md105;
(*(int *)((mz_+i_-1)*(ssize_t)sizeof(int)+imz_))=(md105=(nzd_-(*(int *)((mz_-i_-1)*(ssize_t)sizeof(int)+imz_))) % (*(&nzd_)  ),md105>=0?md105:md105+(*(&nzd_)  ));}i_+=1;}while(i_<=mz_-2);}   mz_ = 2*mz_ -2;
}
   fprintf(stdout,"""mx=""");fprintf(stdout,"%d",mx_);fprintf(stdout,"\t");fprintf(stdout,"""mz=""");fprintf(stdout,"%d",mz_);putc('\n',stdout);

/*! Definitions*/
/*! -----------------------------*/
gkedata_106h=(ny_ / 2 )+1;
gkedata_107i=(ssize_t)sizeof(int)*(gkedata_106h-(-1)+1);
gkedata_108st=(-1)*(ssize_t)sizeof(int);

startpos_=malloc(gkedata_107i);if(startpos_==NULL)errmalloc();startpos_-=gkedata_108st;atblockexit(startpos_f,free,startpos_+gkedata_108st);memset(gkedata_108st+startpos_,0,gkedata_107i); {int iy_= - 1  ;do{{ (*(int *)((iy_+1)*(ssize_t)sizeof(int)+startpos_))=(*(int *)(iy_*(ssize_t)sizeof(int)+startpos_))+(ny_-2*iy_+1) ;}iy_+=1;}while(iy_<=(ny_ / 2));}
gkedata_109h=(*(int *)(((ny_/2)+1)*(ssize_t)sizeof(int)+startpos_))-1;
gkedata_110h=mx_-1;
gkedata_111h=mz_-1;
gkedata_112i=(ssize_t)sizeof(struct GKETERMS_)*(gkedata_111h+1);
gkedata_113i=gkedata_112i*(gkedata_110h+1);
gkedata_=NULL;atblockexit(gkedata_f,errfclose,&gkedata_);errfopen(&uiujimage_,"uiuj.bin",O_RDWR|O_CREAT);  { if((ssize_t)sizeof(struct MEANTERMS_)==(ssize_t)sizeof(struct MEANTERMS_)&&(ssize_t)sizeof(struct MEANTERMS_)==(ssize_t)sizeof(struct MEANTERMS_)){if(!(fseeko(uiujimage_,(off_t)(-gkedata_97st+(ssize_t)(char*)(void*)(0))+(ssize_t)sizeof(struct MEANTERMS_),SEEK_SET)==0&&fread(mean_+(ssize_t)sizeof(struct MEANTERMS_),(ssize_t)sizeof(struct MEANTERMS_),2-1+1,uiujimage_)==2-1+1))ioerr(uiujimage_);}else{  {int _114i_=1;do{{if(!(fseeko(uiujimage_,_114i_*(off_t)(ssize_t)sizeof(struct MEANTERMS_)+(off_t)(-gkedata_97st+(ssize_t)(char*)(void*)(0)) ,SEEK_SET)==0&&fread((struct MEANTERMS_ *)(_114i_*(ssize_t)sizeof(struct MEANTERMS_)+mean_),(ssize_t)sizeof(struct MEANTERMS_),1,uiujimage_)==1))ioerr(uiujimage_);}_114i_++;}while(_114i_<=2);}}; if((ssize_t)sizeof(struct BALANCE_)==(ssize_t)sizeof(struct BALANCE_)&&(ssize_t)sizeof(struct BALANCE_)==(ssize_t)sizeof(struct BALANCE_)){if(!(fseeko(uiujimage_,(off_t)((gkedata_96i+gkedata_98i)-gkedata_101st+(ssize_t)(char*)(void*)(0))+(ssize_t)sizeof(struct BALANCE_),SEEK_SET)==0&&fread(uiuj_+(ssize_t)sizeof(struct BALANCE_),(ssize_t)sizeof(struct BALANCE_),2-1+1,uiujimage_)==2-1+1))ioerr(uiujimage_);}else{  {int _115i_=1;do{{if(!(fseeko(uiujimage_,_115i_*(off_t)(ssize_t)sizeof(struct BALANCE_)+(off_t)((gkedata_96i+gkedata_98i)-gkedata_101st+(ssize_t)(char*)(void*)(0)) ,SEEK_SET)==0&&fread((struct BALANCE_ *)(_115i_*(ssize_t)sizeof(struct BALANCE_)+uiuj_),(ssize_t)sizeof(struct BALANCE_),1,uiujimage_)==1))ioerr(uiujimage_);}_115i_++;}while(_115i_<=2);}};}

/*! Open data for output and set everything to zero*/
/*! ------------------------------*/
errfopen(&gkedata_,path_,O_RDWR|O_CREAT);
if( (iproc_==nproc_) ){ int gkedata_116h;
int gkedata_117h;
int gkedata_118h;
ssize_t gkedata_119i;
ssize_t gkedata_120i;
ssize_t gkedata_121i;
int gkedata_122h;
int gkedata_123h;
int gkedata_124h;
ssize_t gkedata_125i;
ssize_t gkedata_126i;
ssize_t gkedata_127i;
gkedata_116h=(*(int *)(((ny_/2)+1)*(ssize_t)sizeof(int)+startpos_))-1;
gkedata_117h=mx_-1;
gkedata_118h=mz_-1;
gkedata_119i=(ssize_t)sizeof(struct GKETERMS_)*(gkedata_118h+1);
gkedata_120i=gkedata_119i*(gkedata_117h+1);
gkedata_121i=gkedata_120i*(gkedata_116h+1);
gkedata_122h=(*(int *)(((ny_/2)+1)*(ssize_t)sizeof(int)+startpos_))-1;
gkedata_123h=mx_-1;
gkedata_124h=mz_-1;
gkedata_125i=(ssize_t)sizeof(struct GKETERMS_)*(gkedata_124h+1);
gkedata_126i=gkedata_125i*(gkedata_123h+1);
gkedata_127i=gkedata_126i*(gkedata_122h+1);
 fprintf(stdout,"""Will require " "%g"" GiB on disk...""",(double)(gkedata_127i)/(pow(1024.0,3)) );putc('\n',stdout);};
if( (iproc_==nproc_) ){  fprintf(stdout,"""Computing Kolmogorov Equation...""");putc('\n',stdout);};

/*! Pseudo-spectral convolutions*/
/*! ------------------------------*/

wallclock: 
  gettimeofday(&wallclock_wallclock_startim,NULL);
  wallclock_exit:;

step1B_gke_1h=ny_+1;
step1B_gke_2h=mx_-1;
step1B_gke_3h=mz_-1;
step1B_gke_4i=(ssize_t)sizeof(struct GKETERMS_)*(step1B_gke_3h+1);
step1B_gke_5i=step1B_gke_4i*(step1B_gke_2h+1);
step1B_gke_6i=step1B_gke_5i*(step1B_gke_1h-(-1)+1);
step1B_gke_7st=(-1)*step1B_gke_5i;

gke_=mmap(NULL,step1B_gke_6i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(gke_==MAP_FAILED)errmalloc();gke_-=step1B_gke_7st;atblockexit(gke_f,gke_free,(void*)gke_);memset(step1B_gke_7st+gke_,0,step1B_gke_6i);step1B_gke_8h=nxd_-1;
step1B_gke_9h=nzd_-1;
step1B_gke_11i=(ssize_t)sizeof(struct step1B_gke_s10)*(step1B_gke_9h+1);
step1B_gke_12i=step1B_gke_11i*(step1B_gke_8h+1);
step1B_gke_13i=step1B_gke_12i*2;
step1B_gke_14i=step1B_gke_13i*2;
step1B_gke_15st=step1B_gke_13i+step1B_gke_12i;

R_=mmap(NULL,step1B_gke_14i,PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANON,-1,0);if(R_==MAP_FAILED)errmalloc();R_-=step1B_gke_15st;atblockexit(R_f,R_free,(void*)R_);memset(step1B_gke_15st+R_,0,step1B_gke_14i);files:;  {int if_=20  ;while(if_<=36 ){
 struct freefunc field_name_f;char *field_name_; 
  struct freefunc pressure_name_f;char *pressure_name_; 
   off_t step1B_gke_20st;
off_t step1B_gke_21st;
 fprintf(stdout,"""iproc=""\t%d\t""   ""\t""file ""\t%d\t"" of ""\t%d",iproc_  ,if_  ,36);putc('\n',stdout); 
 /*! Open V and P fields*/
  fprintf(stdout,"""iproc=""\t%d\t""   ""\t""Reading data...""",iproc_ );putc('\n',stdout);  t1_=wallclock_1wallclock(); 
 field_name_=0;atblockexit(field_name_f,condfree,field_name_); {char *tmp; tmp=malloc(snprintf(NULL,0,"""Dati.cart.""%d"".fld""",if_)+1); sprintf(tmp,"""Dati.cart.""%d"".fld""",if_); if(field_name_)free(field_name_);field_name_=tmp;} errfopen(&diskimage_ ,field_name_,O_RDWR|O_CREAT);    {int _16i_=(-1);do{{  {int _17i_=gkedata_37h;do{{if((ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)==(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)&&(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)==(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)){if(!(fseeko(diskimage_,_17i_*(off_t)gkedata_78i+_16i_*(off_t)gkedata_79i+(off_t)((ssize_t)sizeof(struct gkedata_s80)-gkedata_85st+(ssize_t)(char*)(struct gkedata_s80*)(0))+gkedata_43st,SEEK_SET)==0&&fread(_17i_*gkedata_40i+_16i_*gkedata_41i+Vtot_+gkedata_43st,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1),gkedata_39h-gkedata_38l+1,diskimage_)==gkedata_39h-gkedata_38l+1))ioerr(diskimage_);}else{  {int _18i_=gkedata_38l;do{{if((ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)&&(ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)){if(!(fseeko(diskimage_,_18i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)*(off_t)((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+_17i_*(off_t)gkedata_78i+_16i_*(off_t)gkedata_79i+(off_t)((ssize_t)sizeof(struct gkedata_s80)-gkedata_85st+(ssize_t)(char*)(struct gkedata_s80*)(0)),SEEK_SET)==0&&fread(_18i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+_17i_*gkedata_40i+_16i_*gkedata_41i+Vtot_,(ssize_t)sizeof(struct COMPLEX_),(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1,diskimage_)==(((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1))ioerr(diskimage_);}else{  {int _19i_=((0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/;do{{if(!(fseeko(diskimage_,_19i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)+_18i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)*(off_t)((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+_17i_*(off_t)gkedata_78i+_16i_*(off_t)gkedata_79i+(off_t)((ssize_t)sizeof(struct gkedata_s80)-gkedata_85st+(ssize_t)(char*)(struct gkedata_s80*)(0)) ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(_19i_*(ssize_t)sizeof(struct COMPLEX_)+_18i_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+_17i_*gkedata_40i+_16i_*gkedata_41i+Vtot_),(ssize_t)sizeof(struct COMPLEX_),1,diskimage_)==1))ioerr(diskimage_);}_19i_--;}while(_19i_>=0);}};}_18i_++;}while(_18i_<=gkedata_39h);}};}_17i_--;}while(_17i_>=0);}}_16i_++;}while(_16i_<=gkedata_36h);}  errfclose(&diskimage_);
 pressure_name_=0;atblockexit(pressure_name_f,condfree,pressure_name_); {char *tmp; tmp=malloc(snprintf(NULL,0,"""pField""%d"".fld""",if_)+1); sprintf(tmp,"""pField""%d"".fld""",if_); if(pressure_name_)free(pressure_name_);pressure_name_=tmp;}errfopen(&pressuredata_,pressure_name_,O_RDWR|O_CREAT);  step1B_gke_20st=gkedata_88l*(ssize_t)sizeof(struct COMPLEX_);
step1B_gke_21st=(-1)*gkedata_91i+step1B_gke_20st;
  {int _22i_=(-1);do{{  {int _23i_=gkedata_46h;do{{if((ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)&&(ssize_t)sizeof(struct COMPLEX_)==(ssize_t)sizeof(struct COMPLEX_)){if(!(fseeko(pressuredata_,_23i_*(off_t)gkedata_90i+_22i_*(off_t)gkedata_91i+(-step1B_gke_21st)+gkedata_52st,SEEK_SET)==0&&fread(_23i_*gkedata_49i+_22i_*gkedata_50i+ptot_+gkedata_52st,(ssize_t)sizeof(struct COMPLEX_),gkedata_48h-gkedata_47l+1,pressuredata_)==gkedata_48h-gkedata_47l+1))ioerr(pressuredata_);}else{  {int _24i_=gkedata_47l;do{{if(!(fseeko(pressuredata_,_24i_*(off_t)(ssize_t)sizeof(struct COMPLEX_)+_23i_*(off_t)gkedata_90i+_22i_*(off_t)gkedata_91i+(-step1B_gke_21st) ,SEEK_SET)==0&&fread((struct COMPLEX_ *)(_24i_*(ssize_t)sizeof(struct COMPLEX_)+_23i_*gkedata_49i+_22i_*gkedata_50i+ptot_),(ssize_t)sizeof(struct COMPLEX_),1,pressuredata_)==1))ioerr(pressuredata_);}_24i_++;}while(_24i_<=gkedata_48h);}};}_23i_--;}while(_23i_>=0);}}_22i_++;}while(_22i_<=gkedata_45h);}  errfclose(&pressuredata_);  t2_=wallclock_1wallclock(); 
  fprintf(stdout,"""iproc=""\t%d\t""   ""\t""Reading took ""\t%g\t"" seconds""",iproc_  ,t2_-t1_ );putc('\n',stdout);
   outer:;  {int IY1_=gkedata_12nyl  ;while(IY1_<=gkedata_13nyh){  
     int step1B_gke_25h;
ssize_t step1B_gke_26i;
int step1B_gke_ca34[2]={1, - 1};
int step1B_gke_188h;
int step1B_gke_189h;
 fprintf(stdout,"""iproc=""\t%d\t""   ""\t""   ""\t""IY1= ""\t%d\t""of""\t%d",iproc_   ,IY1_  ,gkedata_13nyh);putc('\n',stdout);  step1B_gke_25h=ny_-2*IY1_;
step1B_gke_26i=step1B_gke_5i*(step1B_gke_25h+1);
memset(IY1_*step1B_gke_5i+gke_,0,step1B_gke_26i);  t1_=wallclock_1wallclock(); 
     /*! Reload data for this IY1, need for averaging "on disk"*/
      fprintf(stdout,"""iproc=""\t%d\t""   ""\t""   ""\t""   ""\t""Reading gke data...""",iproc_    );putc('\n',stdout);  t3_=wallclock_1wallclock(); 
     if( if_>20 ){ int step1B_gke_27h;
int step1B_gke_28h;
step1B_gke_27h=ny_-2*IY1_;
step1B_gke_28h=ny_-2*IY1_;
  {int _29i_=step1B_gke_27h;do{{  {int _30i_=step1B_gke_2h;do{{if((ssize_t)sizeof(struct GKETERMS_)==(ssize_t)sizeof(struct GKETERMS_)&&(ssize_t)sizeof(struct GKETERMS_)==(ssize_t)sizeof(struct GKETERMS_)){if(!(fseeko(gkedata_,_30i_*(off_t)gkedata_112i+_29i_*(off_t)gkedata_113i+(*(int*)(IY1_*(ssize_t)sizeof(int)+startpos_))*(off_t)gkedata_113i,SEEK_SET)==0&&fread(_30i_*step1B_gke_4i+_29i_*step1B_gke_5i+IY1_*step1B_gke_5i+gke_,(ssize_t)sizeof(struct GKETERMS_),step1B_gke_3h+1,gkedata_)==step1B_gke_3h+1))ioerr(gkedata_);}else{  {int _31i_=step1B_gke_3h;do{{if(!(fseeko(gkedata_,_31i_*(off_t)(ssize_t)sizeof(struct GKETERMS_)+_30i_*(off_t)gkedata_112i+_29i_*(off_t)gkedata_113i+(*(int*)(IY1_*(ssize_t)sizeof(int)+startpos_))*(off_t)gkedata_113i ,SEEK_SET)==0&&fread((struct GKETERMS_ *)(_31i_*(ssize_t)sizeof(struct GKETERMS_)+_30i_*step1B_gke_4i+_29i_*step1B_gke_5i+IY1_*step1B_gke_5i+gke_),(ssize_t)sizeof(struct GKETERMS_),1,gkedata_)==1))ioerr(gkedata_);}_31i_--;}while(_31i_>=0);}};}_30i_--;}while(_30i_>=0);}}_29i_--;}while(_29i_>=0);}}else{ int step1B_gke_32h;
ssize_t step1B_gke_33i;
step1B_gke_32h=ny_-2*IY1_;
step1B_gke_33i=step1B_gke_5i*(step1B_gke_32h+1);
memset(IY1_*step1B_gke_5i+gke_,0,step1B_gke_33i); };  t4_=wallclock_1wallclock(); 
      fprintf(stdout,"""iproc=""\t%d\t""   ""\t""   ""\t""   ""\t""Reading took ""\t%g\t"" seconds""",iproc_     ,t4_-t3_ );putc('\n',stdout);
      {char *sig_=((char*)step1B_gke_ca34);int sig_1=2-1;  while(sig_1>=0){
        /*! Symmetry-aware helper variable  */
        int step1B_gke_35iy1;
/*iy1=step1B_gke_35iy1*/

        /*! Open V and p field*/
            step1B_gke_35iy1=( (*(int *)(sig_))==1  ?IY1_  :ny_-IY1_);
{char *step1B_gke_37_;

step1B_gke_37_=step1B_gke_35iy1*gkedata_41i+Vtot_; {char *step1B_gke_36_=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+V_;int step1B_gke_36_1=gkedata_30h; do{{  {char *step1B_gke_39_;

step1B_gke_39_=gkedata_31l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_37_; {char *step1B_gke_38_=gkedata_31l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2+step1B_gke_36_;int step1B_gke_38_1=gkedata_32h-gkedata_31l; do{{ memcpy(step1B_gke_38_,step1B_gke_39_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)); step1B_gke_39_ =(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_39_;}step1B_gke_38_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2;step1B_gke_38_1--;}while(step1B_gke_38_1>=0);}}step1B_gke_37_ =gkedata_40i+step1B_gke_37_;}step1B_gke_36_+=gkedata_33i;step1B_gke_36_1--;}while(step1B_gke_36_1>=0);}}if(!(fseeko(uiujimage_,step1B_gke_35iy1*(off_t)(ssize_t)sizeof(struct MEANTERMS_)+(off_t)(0-gkedata_97st+(ssize_t)(char*)(void*)(0)),SEEK_SET)==0&&fread((struct MEANTERMS_ *)((ssize_t)sizeof(struct MEANTERMS_)+mean_),(ssize_t)sizeof(struct MEANTERMS_),1,uiujimage_)==1))ioerr(uiujimage_);  {char *step1B_gke_41_;

step1B_gke_41_=step1B_gke_35iy1*gkedata_50i+ptot_; {char *step1B_gke_40_=(ssize_t)sizeof(struct COMPLEX_)+p_;int step1B_gke_40_1=gkedata_24h; do{{  {char *step1B_gke_43_;

step1B_gke_43_=gkedata_25l*(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_41_; {char *step1B_gke_42_=gkedata_25l*(ssize_t)sizeof(struct COMPLEX_)*2+step1B_gke_40_;int step1B_gke_42_1=gkedata_26h-gkedata_25l; do{{ {register double temp=(*(struct COMPLEX_*)(step1B_gke_43_)).REAL_;(*(struct COMPLEX_ *)(step1B_gke_42_)).IMAG_=(*(struct COMPLEX_*)(step1B_gke_43_)).IMAG_;(*(struct COMPLEX_ *)(step1B_gke_42_)).REAL_=temp;}; step1B_gke_43_ =(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_43_;}step1B_gke_42_+=(ssize_t)sizeof(struct COMPLEX_)*2;step1B_gke_42_1--;}while(step1B_gke_42_1>=0);}}step1B_gke_41_ =gkedata_49i+step1B_gke_41_;}step1B_gke_40_+=gkedata_27i;step1B_gke_40_1--;}while(step1B_gke_40_1>=0);}}if(!(fseeko(uiujimage_,step1B_gke_35iy1*(off_t)(ssize_t)sizeof(struct BALANCE_)+(off_t)((gkedata_96i+gkedata_98i)-gkedata_101st+(ssize_t)(char*)(void*)(0)),SEEK_SET)==0&&fread((struct BALANCE_ *)((ssize_t)sizeof(struct BALANCE_)+uiuj_),(ssize_t)sizeof(struct BALANCE_),1,uiujimage_)==1))ioerr(uiujimage_);
        /*! Remove mean*/
        { struct MEANTERMS_ *step1B_gke_44w;
char *step1B_gke_45w;
step1B_gke_44w=(struct MEANTERMS_ *)((ssize_t)sizeof(struct MEANTERMS_)+mean_);
step1B_gke_45w=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+V_;
(*(struct COMPLEX_ *)(0+step1B_gke_45w)).REAL_-=(*step1B_gke_44w).U_; (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_45w)).REAL_-=(*step1B_gke_44w).W_; {register double temp=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+p_)).REAL_-((*step1B_gke_44w).P_);(*(struct COMPLEX_ *)((ssize_t)sizeof(struct COMPLEX_)+p_)).IMAG_=(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+p_)).IMAG_;(*(struct COMPLEX_ *)((ssize_t)sizeof(struct COMPLEX_)+p_)).REAL_=temp;};}
        fflush(NULL); ismp_=0  ;while(ismp_<32-1&&fork()){ismp_+=1;;};{

          gkedata_128convolutions(0,gkedata_30h,gkedata_33i,gkedata_31l,gkedata_32h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+V_,0,gkedata_58h,gkedata_60i,0,gkedata_59h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)*2,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+VVd_);
          inner:;  {int IY2_=IY1_  ;while(IY2_<=ny_-IY1_){
            int step1B_gke_46iy2;
/*iy2=step1B_gke_46iy2*/

            /*! Open V and p field, remove mean*/
            



            step1B_gke_46iy2=( (*(int *)(sig_))==1   ?IY2_  :ny_-IY2_);
if( ismp_==0 ){ 
                  {char *step1B_gke_48_;

step1B_gke_48_=step1B_gke_46iy2*gkedata_41i+Vtot_; {char *step1B_gke_47_=2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+V_;int step1B_gke_47_1=gkedata_30h; do{{  {char *step1B_gke_50_;

step1B_gke_50_=gkedata_31l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_48_; {char *step1B_gke_49_=gkedata_31l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2+step1B_gke_47_;int step1B_gke_49_1=gkedata_32h-gkedata_31l; do{{ memcpy(step1B_gke_49_,step1B_gke_50_,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)); step1B_gke_50_ =(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_50_;}step1B_gke_49_+=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2;step1B_gke_49_1--;}while(step1B_gke_49_1>=0);}}step1B_gke_48_ =gkedata_40i+step1B_gke_48_;}step1B_gke_47_+=gkedata_33i;step1B_gke_47_1--;}while(step1B_gke_47_1>=0);}}{char *step1B_gke_52_;

step1B_gke_52_=step1B_gke_46iy2*gkedata_50i+ptot_; {char *step1B_gke_51_=2*(ssize_t)sizeof(struct COMPLEX_)+p_;int step1B_gke_51_1=gkedata_24h; do{{  {char *step1B_gke_54_;

step1B_gke_54_=gkedata_25l*(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_52_; {char *step1B_gke_53_=gkedata_25l*(ssize_t)sizeof(struct COMPLEX_)*2+step1B_gke_51_;int step1B_gke_53_1=gkedata_26h-gkedata_25l; do{{ {register double temp=(*(struct COMPLEX_*)(step1B_gke_54_)).REAL_;(*(struct COMPLEX_ *)(step1B_gke_53_)).IMAG_=(*(struct COMPLEX_*)(step1B_gke_54_)).IMAG_;(*(struct COMPLEX_ *)(step1B_gke_53_)).REAL_=temp;}; step1B_gke_54_ =(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_54_;}step1B_gke_53_+=(ssize_t)sizeof(struct COMPLEX_)*2;step1B_gke_53_1--;}while(step1B_gke_53_1>=0);}}step1B_gke_52_ =gkedata_49i+step1B_gke_52_;}step1B_gke_51_+=gkedata_27i;step1B_gke_51_1--;}while(step1B_gke_51_1>=0);}}if(!(fseeko(uiujimage_,step1B_gke_46iy2*(off_t)(ssize_t)sizeof(struct MEANTERMS_)+(off_t)(0-gkedata_97st+(ssize_t)(char*)(void*)(0)),SEEK_SET)==0&&fread((struct MEANTERMS_ *)(2*(ssize_t)sizeof(struct MEANTERMS_)+mean_),(ssize_t)sizeof(struct MEANTERMS_),1,uiujimage_)==1))ioerr(uiujimage_);  if(!(fseeko(uiujimage_,step1B_gke_46iy2*(off_t)(ssize_t)sizeof(struct BALANCE_)+(off_t)((gkedata_96i+gkedata_98i)-gkedata_101st+(ssize_t)(char*)(void*)(0)),SEEK_SET)==0&&fread((struct BALANCE_ *)(2*(ssize_t)sizeof(struct BALANCE_)+uiuj_),(ssize_t)sizeof(struct BALANCE_),1,uiujimage_)==1))ioerr(uiujimage_);  
              { struct MEANTERMS_ *step1B_gke_55w;
char *step1B_gke_56w;
step1B_gke_55w=(struct MEANTERMS_ *)(2*(ssize_t)sizeof(struct MEANTERMS_)+mean_);
step1B_gke_56w=2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+V_;
(*(struct COMPLEX_ *)(0+step1B_gke_56w)).REAL_-=(*step1B_gke_55w).U_; (*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_56w)).REAL_-=(*step1B_gke_55w).W_; {register double temp=(*(struct COMPLEX_*)(2*(ssize_t)sizeof(struct COMPLEX_)+p_)).REAL_-((*step1B_gke_55w).P_);(*(struct COMPLEX_ *)(2*(ssize_t)sizeof(struct COMPLEX_)+p_)).IMAG_=(*(struct COMPLEX_*)(2*(ssize_t)sizeof(struct COMPLEX_)+p_)).IMAG_;(*(struct COMPLEX_ *)(2*(ssize_t)sizeof(struct COMPLEX_)+p_)).REAL_=temp;};}
            };
            {
  register int md57;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md57=((ismp_)+1) % (32),md57>=0?md57:md57+(32));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
            gkedata_128convolutions(0,gkedata_30h,gkedata_33i,gkedata_31l,gkedata_32h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2,2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+V_,0,gkedata_58h,gkedata_60i,0,gkedata_59h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)*2,2*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+VVd_); 
             {int i1_=1  ;while(i1_<=2 ){ {int i2_=1  ;while(i2_<=2){
               {int ix_=(ismp_*(nx_+1) / 32 ) ;while(ix_<=((ismp_+1)*(nx_+1) / 32 )-1){
                int step1B_gke_58l;
int step1B_gke_59h;
ssize_t step1B_gke_60st;
ssize_t step1B_gke_61i;
step1B_gke_58l=nz_+1;
step1B_gke_59h=nzd_-nz_-1;
step1B_gke_60st=step1B_gke_58l*(ssize_t)sizeof(struct step1B_gke_s10);
step1B_gke_61i=(ssize_t)sizeof(struct step1B_gke_s10)*(step1B_gke_59h-step1B_gke_58l+1);
memset(step1B_gke_60st+ix_*step1B_gke_11i+i2_*step1B_gke_12i+i1_*step1B_gke_13i+R_,0,step1B_gke_61i);
                 {int iz_= - nz_  ;do{{ {
                  char *step1B_gke_62w;
char *step1B_gke_63w;
struct step1B_gke_s10 *step1B_gke_64w;
step1B_gke_62w=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*2+ix_*gkedata_33i+V_;
step1B_gke_63w=(*(int*)(iz_*(ssize_t)sizeof(int)+izdV_))*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)*2+ix_*gkedata_60i+VVd_;
step1B_gke_64w=(struct step1B_gke_s10 *)((*(int*)(iz_*(ssize_t)sizeof(int)+izdV_))*(ssize_t)sizeof(struct step1B_gke_s10)+ix_*step1B_gke_11i+i2_*step1B_gke_12i+i1_*step1B_gke_13i+R_);
{register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).UU_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).UU_.REAL_=temp;};    {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).VV_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).VV_.REAL_=temp;};    {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).WW_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).WW_.REAL_=temp;};    {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).UV_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).UV_.REAL_=temp;};    {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*2+ix_*gkedata_27i+p_)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*2+ix_*gkedata_27i+p_)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).PV_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*2+ix_*gkedata_27i+p_)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*2+ix_*gkedata_27i+p_)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).PV_.REAL_=temp;}; 
                  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).uuu_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).uuu_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).uuv_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).uuv_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).uuw_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).uuw_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).vvu_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).vvu_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).vvv_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).vvv_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).vvw_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).vvw_.REAL_=temp;}; 
                  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).wwu_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).wwu_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).wwv_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).wwv_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).www_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).www_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).uvu_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).uvu_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).uvv_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).uvv_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).uwu_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).uwu_.REAL_=temp;}; 
                  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).uww_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).uww_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).vwv_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).vwv_.REAL_=temp;};  {register double temp=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_+(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_);(*step1B_gke_64w).vww_.IMAG_=((*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).REAL_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).IMAG_-(*(struct COMPLEX_*)(i1_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA23*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_63w)).IMAG_*(*(struct COMPLEX_*)(i2_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_62w)).REAL_);(*step1B_gke_64w).vww_.REAL_=temp;}; 
                }}iz_+=1;}while(iz_<=nz_);}
                {  char *step1B_gke_65w;
step1B_gke_65w=ix_*step1B_gke_11i+i2_*step1B_gke_12i+i1_*step1B_gke_13i+R_;
{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).UU_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).UU_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).VV_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).VV_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).WW_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).WW_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).UV_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).UV_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).PV_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).PV_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uuu_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uuu_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uuv_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uuv_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uuw_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uuw_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vvu_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vvu_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vvv_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vvv_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vvw_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vvw_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).wwu_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).wwu_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).wwv_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).wwv_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).www_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).www_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uvu_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uvu_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uvv_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uvv_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uwu_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uwu_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uww_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).uww_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vwv_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vwv_));};  }{  {fft_1IFT(0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vww_),0,step1B_gke_9h,(ssize_t)sizeof(struct step1B_gke_s10),((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_65w)).vww_));};  }}
              ix_+=1;};}
              if( ismp_==0 ){ int step1B_gke_66l;
int step1B_gke_67h;
ssize_t step1B_gke_68st;
ssize_t step1B_gke_69i;
step1B_gke_66l=nx_+1;
step1B_gke_67h=nxd_-1;
step1B_gke_68st=step1B_gke_66l*step1B_gke_11i;
step1B_gke_69i=step1B_gke_11i*(step1B_gke_67h-step1B_gke_66l+1);
memset(step1B_gke_68st+i2_*step1B_gke_12i+i1_*step1B_gke_13i+R_,0,step1B_gke_69i);};
              {
  register int md70;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md70=((ismp_)+1) % (32),md70>=0?md70:md70+(32));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
               {int iz_=(ismp_*nzd_ / 32 ) ;do{{ { 
                char *step1B_gke_71w;
step1B_gke_71w=iz_*(ssize_t)sizeof(struct step1B_gke_s10)+i2_*step1B_gke_12i+i1_*step1B_gke_13i+R_;
{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).UU_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).UU_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).VV_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).VV_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).WW_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).WW_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).UV_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).UV_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).PV_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).PV_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uuu_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uuu_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uuv_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uuv_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uuw_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uuw_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vvu_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vvu_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vvv_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vvv_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vvw_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vvw_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).wwu_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).wwu_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).wwv_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).wwv_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).www_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).www_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uvu_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uvu_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uvv_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uvv_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uwu_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uwu_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uww_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).uww_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vwv_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vwv_));};  }{  {fft_3RFT(0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vww_),0,step1B_gke_8h,step1B_gke_11i,((char*)&(*(struct step1B_gke_s10 *)(step1B_gke_71w)).vww_));};  }
              }}iz_+=1;}while(iz_<=((ismp_+1)*nzd_ / 32 )-1);}
            i2_+=1;};}i1_+=1;};}
            {
  register int md72;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md72=((ismp_)+1) % (32),md72>=0?md72:md72+(32));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
        /*! Compute GKE terms*/
 {int jx_=(ismp_*mx_ / 32 ) ;do{ {int jz_=0  ;do{{ {
              struct GKETERMS_ *step1B_gke_73w;
int step1B_gke_74ix;
/*ix=step1B_gke_74ix*/
  int step1B_gke_75iz;
/*iz=step1B_gke_75iz*/

              register int md76;
register int md77;
register int md78;
register int md79;
register int md80;
register int md81;
register int md82;
register int md83;
register int md84;
register int md85;
register int md86;
register int md87;
register int md88;
register int md89;
register int md90;
register int md91;
register int md92;
register int md93;
register int md94;
register int md95;
register int md96;
register int md97;
register int md98;
register int md99;
register int md100;
register int md101;
register int md102;
register int md103;
register int md104;
register int md105;
register int md106;
register int md107;
register int md108;
register int md109;
register int md110;
register int md111;
register int md112;
register int md113;
register int md114;
register int md115;
register int md116;
register int md117;
double step1B_gke_118iscaleENER;
/*iscaleENER=step1B_gke_118iscaleENER*/
  register int md119;
register int md120;
register int md121;
register int md122;
register int md123;
register int md124;
register int md125;
register int md126;
register int md127;
register int md128;
register int md129;
register int md130;
register int md131;
register int md132;
register int md133;
register int md134;
register int md135;
register int md136;
double step1B_gke_137;
double step1B_gke_138;
step1B_gke_73w=(struct GKETERMS_ *)(jz_*(ssize_t)sizeof(struct GKETERMS_)+jx_*step1B_gke_4i+IY2_*step1B_gke_5i+gke_);
step1B_gke_74ix=(*(int *)(jx_*(ssize_t)sizeof(int)+imx_));
step1B_gke_75iz=(*(int *)(jz_*(ssize_t)sizeof(int)+imz_));
 (*(double *)((ssize_t)sizeof(double)+(*step1B_gke_73w).phiR_-((ssize_t)sizeof(double))) )+=      (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uuu_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md76=(nzd_-step1B_gke_75iz)%nzd_,md76>=0?md76:md76+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uuu_,(md77=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md77>=0?md77:md77+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uuu_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md78=(nzd_-step1B_gke_75iz)%nzd_,md78>=0?md78:md78+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uuu_,(md79=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md79>=0?md79:md79+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).uuu_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).uuu_,0)) ))) + (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vvu_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md80=(nzd_-step1B_gke_75iz)%nzd_,md80>=0?md80:md80+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vvu_,(md81=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md81>=0?md81:md81+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uvv_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md82=(nzd_-step1B_gke_75iz)%nzd_,md82>=0?md82:md82+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uvv_,(md83=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md83>=0?md83:md83+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).vvu_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).vvu_,0)) ))) + (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).wwu_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md84=(nzd_-step1B_gke_75iz)%nzd_,md84>=0?md84:md84+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).wwu_,(md85=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md85>=0?md85:md85+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uww_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md86=(nzd_-step1B_gke_75iz)%nzd_,md86>=0?md86:md86+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uww_,(md87=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md87>=0?md87:md87+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).wwu_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).wwu_,0)) )));
               (*(double *)(2*(ssize_t)sizeof(double)+(*step1B_gke_73w).phiR_-((ssize_t)sizeof(double))) )+= (double)((*(int*)(sig_)))*((( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uuv_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md88=(nzd_-step1B_gke_75iz)%nzd_,md88>=0?md88:md88+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uuv_,(md89=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md89>=0?md89:md89+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uvu_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md90=(nzd_-step1B_gke_75iz)%nzd_,md90>=0?md90:md90+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uvu_,(md91=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md91>=0?md91:md91+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).uuv_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).uuv_,0)) ))) + (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vvv_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md92=(nzd_-step1B_gke_75iz)%nzd_,md92>=0?md92:md92+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vvv_,(md93=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md93>=0?md93:md93+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vvv_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md94=(nzd_-step1B_gke_75iz)%nzd_,md94>=0?md94:md94+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vvv_,(md95=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md95>=0?md95:md95+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).vvv_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).vvv_,0)) ))) + (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).wwv_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md96=(nzd_-step1B_gke_75iz)%nzd_,md96>=0?md96:md96+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).wwv_,(md97=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md97>=0?md97:md97+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vww_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md98=(nzd_-step1B_gke_75iz)%nzd_,md98>=0?md98:md98+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vww_,(md99=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md99>=0?md99:md99+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).wwv_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).wwv_,0)) ))));
               (*(double *)(3*(ssize_t)sizeof(double)+(*step1B_gke_73w).phiR_-((ssize_t)sizeof(double))) )+=      (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uuw_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md100=(nzd_-step1B_gke_75iz)%nzd_,md100>=0?md100:md100+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uuw_,(md101=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md101>=0?md101:md101+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uwu_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md102=(nzd_-step1B_gke_75iz)%nzd_,md102>=0?md102:md102+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uwu_,(md103=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md103>=0?md103:md103+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).uuw_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).uuw_,0)) ))) + (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vvw_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md104=(nzd_-step1B_gke_75iz)%nzd_,md104>=0?md104:md104+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vvw_,(md105=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md105>=0?md105:md105+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vwv_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md106=(nzd_-step1B_gke_75iz)%nzd_,md106>=0?md106:md106+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vwv_,(md107=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md107>=0?md107:md107+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).vvw_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).vvw_,0)) ))) + (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).www_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md108=(nzd_-step1B_gke_75iz)%nzd_,md108>=0?md108:md108+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).www_,(md109=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md109>=0?md109:md109+(2*nxd_)))) )+ 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).www_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md110=(nzd_-step1B_gke_75iz)%nzd_,md110>=0?md110:md110+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).www_,(md111=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md111>=0?md111:md111+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).www_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).www_,0)) )));
              step1B_gke_118iscaleENER=(( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).UU_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).UU_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).UU_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md112=(nzd_-step1B_gke_75iz)%nzd_,md112>=0?md112:md112+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).UU_,(md113=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md113>=0?md113:md113+(2*nxd_)))) )))+(( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).VV_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).VV_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).VV_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md114=(nzd_-step1B_gke_75iz)%nzd_,md114>=0?md114:md114+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).VV_,(md115=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md115>=0?md115:md115+(2*nxd_)))) )))+(( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).WW_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).WW_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).WW_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md116=(nzd_-step1B_gke_75iz)%nzd_,md116>=0?md116:md116+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).WW_,(md117=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md117>=0?md117:md117+(2*nxd_)))) )));
 (*step1B_gke_73w).scaleENER_ += step1B_gke_118iscaleENER;
               (*(double *)((ssize_t)sizeof(double)+(*step1B_gke_73w).phiR_-((ssize_t)sizeof(double))) )+= step1B_gke_118iscaleENER*( (*(double *)(2*(ssize_t)sizeof(struct MEANTERMS_)+(char*)&(*(struct MEANTERMS_*)(mean_)).U_))-(*(double *)((ssize_t)sizeof(struct MEANTERMS_)+(char*)&(*(struct MEANTERMS_*)(mean_)).U_) ));   (*(double *)(2*(ssize_t)sizeof(double)+(*step1B_gke_73w).phiR_-((ssize_t)sizeof(double))) )+= 0.;   (*(double *)(3*(ssize_t)sizeof(double)+(*step1B_gke_73w).phiR_-((ssize_t)sizeof(double))) )+= step1B_gke_118iscaleENER*( (*(double *)(2*(ssize_t)sizeof(struct MEANTERMS_)+(char*)&(*(struct MEANTERMS_*)(mean_)).W_))-(*(double *)((ssize_t)sizeof(struct MEANTERMS_)+(char*)&(*(struct MEANTERMS_*)(mean_)).W_) ));
               (*step1B_gke_73w).phiC_ += 0.5*(double)((*(int*)(sig_)))*( (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uuv_,step1B_gke_74ix)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md119=(nzd_-step1B_gke_75iz)%nzd_,md119>=0?md119:md119+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uuv_,(md120=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md120>=0?md120:md120+(2*nxd_)))) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).uvu_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md121=(nzd_-step1B_gke_75iz)%nzd_,md121>=0?md121:md121+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).uvu_,(md122=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md122>=0?md122:md122+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).uuv_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).uuv_,0)) )))+(( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vvv_,step1B_gke_74ix)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md123=(nzd_-step1B_gke_75iz)%nzd_,md123>=0?md123:md123+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vvv_,(md124=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md124>=0?md124:md124+(2*nxd_)))) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vvv_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md125=(nzd_-step1B_gke_75iz)%nzd_,md125>=0?md125:md125+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vvv_,(md126=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md126>=0?md126:md126+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).vvv_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).vvv_,0)) )))+(( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).wwv_,step1B_gke_74ix)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md127=(nzd_-step1B_gke_75iz)%nzd_,md127>=0?md127:md127+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).wwv_,(md128=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md128>=0?md128:md128+(2*nxd_)))) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).vww_,step1B_gke_74ix)) )- 2.*(*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md129=(nzd_-step1B_gke_75iz)%nzd_,md129>=0?md129:md129+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).vww_,(md130=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md130>=0?md130:md130+(2*nxd_)))) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).wwv_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).wwv_,0)) ))) );   (*step1B_gke_73w).phiC_ += (double)(2*(*(int*)(sig_)))*( (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).PV_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).PV_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).PV_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md131=(nzd_-step1B_gke_75iz)%nzd_,md131>=0?md131:md131+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).PV_,(md132=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md132>=0?md132:md132+(2*nxd_)))) ))) );
               step1B_gke_137=0.; {int i_=1  ;do{{(*&step1B_gke_137)+=(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(struct BALANCE_)+(char*)(*(struct BALANCE_*)(uiuj_)).psdiss_-((ssize_t)sizeof(double))))+(*(double *)(i_*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(struct BALANCE_)+(char*)(*(struct BALANCE_*)(uiuj_)).psdiss_-((ssize_t)sizeof(double))) );}i_+=1;}while(i_<=3);} step1B_gke_138=0.; {int i_=1  ;do{{(*&step1B_gke_138)+=(*(double *)(i_*(ssize_t)sizeof(double)+(ssize_t)sizeof(struct BALANCE_)+(char*)(*(struct BALANCE_*)(uiuj_)).psdiss_-((ssize_t)sizeof(double))))+(*(double *)(i_*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(struct BALANCE_)+(char*)(*(struct BALANCE_*)(uiuj_)).psdiss_-((ssize_t)sizeof(double))) );}i_+=1;}while(i_<=3);} (*step1B_gke_73w).scalePROD_ = (*step1B_gke_73w).scalePROD_ -( (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).UV_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).UV_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).UV_,step1B_gke_74ix)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md133=(nzd_-step1B_gke_75iz)%nzd_,md133>=0?md133:md133+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).UV_,(md134=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md134>=0?md134:md134+(2*nxd_)))) ))) )*((*(double *)((ssize_t)sizeof(struct MEANTERMS_)+(char*)&(*(struct MEANTERMS_*)(mean_)).Uy_))+(*(double *)(2*(ssize_t)sizeof(struct MEANTERMS_)+(char*)&(*(struct MEANTERMS_*)(mean_)).Uy_)))-( (( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).UV_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).UV_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_75iz*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).UV_,step1B_gke_74ix)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md135=(nzd_-step1B_gke_75iz)%nzd_,md135>=0?md135:md135+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).UV_,(md136=(2*nxd_-step1B_gke_74ix) % (2*nxd_),md136>=0?md136:md136+(2*nxd_)))) ))) )*((*(double *)(2*(ssize_t)sizeof(struct MEANTERMS_)+(char*)&(*(struct MEANTERMS_*)(mean_)).Uy_))-(*(double *)((ssize_t)sizeof(struct MEANTERMS_)+(char*)&(*(struct MEANTERMS_*)(mean_)).Uy_)))-step1B_gke_138;
            }}jz_+=1;}while(jz_<=mz_-1);}jx_+=1;}while(jx_<=((ismp_+1)*mx_ / 32 )-1 );}
        /*! phiR.rVISC.(xx,zz) requires derivatives in homogeneous directions of scaleENER*/
             {int iz_=(ismp_*nzd_ / 32 ) ;do{{ 
               {int ix_=0  ;do{{ register int md139;
register int md140;
register int md141;
register int md142;
register int md143;
register int md144;
(*fft_15REALIFIED(0,gkedata_54h,gkedata_56i,0+(ssize_t)sizeof(struct COMPLEX_)+iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+Vd_,ix_))=(( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).UU_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).UU_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(iz_*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).UU_,ix_)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md139=(nzd_-iz_)%nzd_,md139>=0?md139:md139+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).UU_,(md140=(2*nxd_-ix_) % (2*nxd_),md140>=0?md140:md140+(2*nxd_)))) )))+(( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).VV_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).VV_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(iz_*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).VV_,ix_)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md141=(nzd_-iz_)%nzd_,md141>=0?md141:md141+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).VV_,(md142=(2*nxd_-ix_) % (2*nxd_),md142>=0?md142:md142+(2*nxd_)))) )))+(( (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(2*step1B_gke_12i+2*step1B_gke_13i+R_)).WW_,0)) )+ (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(step1B_gke_12i+step1B_gke_13i+R_)).WW_,0)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)(iz_*(ssize_t)sizeof(struct step1B_gke_s10)+2*step1B_gke_12i+step1B_gke_13i+R_)).WW_,ix_)) )- (*(fft_15REALIFIED(0,step1B_gke_8h,step1B_gke_11i,(char*)&(*(struct step1B_gke_s10 *)((md143=(nzd_-iz_)%nzd_,md143>=0?md143:md143+nzd_)*(ssize_t)sizeof(struct step1B_gke_s10)+step1B_gke_12i+2*step1B_gke_13i+R_)).WW_,(md144=(2*nxd_-ix_) % (2*nxd_),md144>=0?md144:md144+(2*nxd_)))) ))) ;}ix_+=1;}while(ix_<=2*nxd_-1 );}
              { char *step1B_gke_145w;
step1B_gke_145w=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+Vd_;
{fft_4HFT(0,gkedata_54h,gkedata_56i,(0+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_145w),0,gkedata_54h,gkedata_56i,(0+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_145w));};}
            }iz_+=1;}while(iz_<=((ismp_+1)*nzd_ / 32 )-1);}
            {
  register int md146;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md146=((ismp_)+1) % (32),md146>=0?md146:md146+(32));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
             {int ix_=(ismp_*(nx_+1) / 32 ) ;do{{
              int step1B_gke_148l;
int step1B_gke_149h;
ssize_t step1B_gke_150st;
ssize_t step1B_gke_151i;
{ char *step1B_gke_147w;
step1B_gke_147w=ix_*gkedata_56i+Vd_;
{fft_2FFT(0,gkedata_55h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_147w),0,gkedata_55h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_147w));};}
              step1B_gke_148l=nz_+1;
step1B_gke_149h=nzd_-nz_-1;
step1B_gke_150st=step1B_gke_148l*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1);
step1B_gke_151i=(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)*(step1B_gke_149h-step1B_gke_148l+1);
memset(step1B_gke_150st+ix_*gkedata_56i+Vd_,0,step1B_gke_151i);   {int iz_= - nz_  ;do{{ { char *step1B_gke_152w;
double step1B_gke_153r;
double step1B_gke_154r;
double step1B_gke_155i;
double step1B_gke_156r;
double step1B_gke_157r;
double step1B_gke_158i;
step1B_gke_152w=(*(int*)(iz_*(ssize_t)sizeof(int)+izdV_))*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+ix_*gkedata_56i+Vd_;
step1B_gke_153r=alfa0_*(double)(ix_);
step1B_gke_154r=(step1B_gke_153r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+step1B_gke_152w)).REAL_);
step1B_gke_155i=(step1B_gke_153r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+step1B_gke_152w)).IMAG_);
{register double temp=(-step1B_gke_155i);(*(struct COMPLEX_ *)(0+step1B_gke_152w)).IMAG_=step1B_gke_154r;(*(struct COMPLEX_ *)(0+step1B_gke_152w)).REAL_=temp;};  step1B_gke_156r=beta0_*(double)(iz_);
step1B_gke_157r=(step1B_gke_156r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+step1B_gke_152w)).REAL_);
step1B_gke_158i=(step1B_gke_156r*(*(struct COMPLEX_*)((ssize_t)sizeof(struct COMPLEX_)+step1B_gke_152w)).IMAG_);
{register double temp=(-step1B_gke_158i);(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_152w)).IMAG_=step1B_gke_157r;(*(struct COMPLEX_ *)(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_152w)).REAL_=temp;};}}iz_+=1;}while(iz_<=nz_ );}
              { char *step1B_gke_159w;
step1B_gke_159w=ix_*gkedata_56i+Vd_;
{fft_1IFT(0,gkedata_55h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1),(0+step1B_gke_159w),0,gkedata_55h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1),(0+step1B_gke_159w));}; {fft_1IFT(0,gkedata_55h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_159w),0,gkedata_55h,(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1),(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_159w));};}
            }ix_+=1;}while(ix_<=((ismp_+1)*(nx_+1) / 32 )-1);}
            if( ismp_==0 ){ int step1B_gke_160l;
int step1B_gke_161h;
ssize_t step1B_gke_162st;
ssize_t step1B_gke_163i;
step1B_gke_160l=nx_+1;
step1B_gke_161h=nxd_-1;
step1B_gke_162st=step1B_gke_160l*gkedata_56i;
step1B_gke_163i=gkedata_56i*(step1B_gke_161h-step1B_gke_160l+1);
memset(step1B_gke_162st+Vd_,0,step1B_gke_163i);};
            {
  register int md164;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md164=((ismp_)+1) % (32),md164>=0?md164:md164+(32));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
             {int iz_=(ismp_*nzd_ / 32 ) ;do{{ { char *step1B_gke_165w;
step1B_gke_165w=iz_*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+Vd_;
{fft_3RFT(0,gkedata_54h,gkedata_56i,(0+step1B_gke_165w),0,gkedata_54h,gkedata_56i,(0+step1B_gke_165w));}; {fft_3RFT(0,gkedata_54h,gkedata_56i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_165w),0,gkedata_54h,gkedata_56i,(0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+step1B_gke_165w));} ;}}iz_+=1;}while(iz_<=((ismp_+1)*nzd_ / 32 )-1);}
            {
  register int md166;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md166=((ismp_)+1) % (32),md166>=0?md166:md166+(32));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
             {int ix_=(ismp_*mx_ / 32 ) ;do{{ 
               {int iz_=0  ;do{{ { struct GKETERMS_ *step1B_gke_167w;
step1B_gke_167w=(struct GKETERMS_ *)(iz_*(ssize_t)sizeof(struct GKETERMS_)+ix_*step1B_gke_4i+IY2_*step1B_gke_5i+gke_);
 (*(double *)((ssize_t)sizeof(double)+(*step1B_gke_167w).phiR_-((ssize_t)sizeof(double))) )-= 2.*ni_*(*fft_15REALIFIED(0,gkedata_54h,gkedata_56i,0+(*(int*)(iz_*(ssize_t)sizeof(int)+imz_))*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+Vd_,(*(int *)(ix_*(ssize_t)sizeof(int)+imx_))));  (*(double *)(3*(ssize_t)sizeof(double)+(*step1B_gke_167w).phiR_-((ssize_t)sizeof(double))) )-= 2.*ni_*(*fft_15REALIFIED(0,gkedata_54h,gkedata_56i,0+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(*(int*)(iz_*(ssize_t)sizeof(int)+imz_))*(ssize_t)sizeof(struct COMPLEX_)*((((ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_)+(ssize_t)sizeof(struct COMPLEX_))/((ssize_t)sizeof(struct COMPLEX_))-1)/*SA22*/+1)+Vd_,(*(int *)(ix_*(ssize_t)sizeof(int)+imx_))) );}}iz_+=1;}while(iz_<=mz_-1);}
            }ix_+=1;}while(ix_<=((ismp_+1)*mx_ / 32 )-1);}
            {
  register int md168;
while(!((*barrier_)==(ismp_)))sigsuspend(&oldmask);
  (*barrier_)=(md168=((ismp_)+1) % (32),md168>=0?md168:md168+(32));  kill(0,SIGUSR1);
  while(!((*barrier_)<=(ismp_)))sigsuspend(&oldmask);
};
          IY2_+=1;};}inner_exit:;
        } if(ismp_<32-1)exit(0);;
 ismp_=0  ;while(ismp_<32-1){if(wait(NULL)<0)traphandler("wait");ismp_+=1;;};
     sig_+=(ssize_t)sizeof(int);sig_1--;};}
      fprintf(stdout,"""iproc=""\t%d\t""   ""\t""   ""\t""IY1= ""\t%d\t""of""\t%d\t"" took ""\t%g\t"" minutes""",iproc_   ,IY1_  ,gkedata_13nyh  ,(wallclock_1wallclock()-t1_)/60. );putc('\n',stdout);
     /*! Average on disk*/
      fprintf(stdout,"""iproc=""\t%d\t""   ""\t""   ""\t""   ""\t""Writing gke data...""",iproc_   );putc('\n',stdout);  t3_=wallclock_1wallclock(); 
     if( if_==36 ){ int step1B_gke_169h;
step1B_gke_169h=ny_-2*IY1_;
{char *step1B_gke_170w;
step1B_gke_170w=IY1_*step1B_gke_5i+gke_;
{ double step1B_gke_171m;
step1B_gke_171m=0.5/(double)(nftot_);
{  {int _172i_=step1B_gke_169h;do{{int _173i_=step1B_gke_2h;do{{int _174i_=step1B_gke_3h;do{{int _175i_=1;do{{(*(double *)(_175i_*(ssize_t)sizeof(double)+_174i_*(ssize_t)sizeof(struct GKETERMS_)+_173i_*step1B_gke_4i+_172i_*step1B_gke_5i+(char*)(*(struct GKETERMS_*)(step1B_gke_170w)).phiR_-((ssize_t)sizeof(double))))*=step1B_gke_171m ;}_175i_++;}while(_175i_<=3);}_174i_--;}while(_174i_>=0);}_173i_--;}while(_173i_>=0);}_172i_--;}while(_172i_>=0);}} }{ double step1B_gke_176m;
step1B_gke_176m=0.5/(double)(nftot_);
{  {int _177i_=step1B_gke_169h;do{{int _178i_=step1B_gke_2h;do{{int _179i_=step1B_gke_3h;do{{(*(double *)(_179i_*(ssize_t)sizeof(struct GKETERMS_)+_178i_*step1B_gke_4i+_177i_*step1B_gke_5i+(char*)&(*(struct GKETERMS_*)(step1B_gke_170w)).phiC_))*=step1B_gke_176m ;}_179i_--;}while(_179i_>=0);}_178i_--;}while(_178i_>=0);}_177i_--;}while(_177i_>=0);}} }{ double step1B_gke_180m;
step1B_gke_180m=0.5/(double)(nftot_);
{  {int _181i_=step1B_gke_169h;do{{int _182i_=step1B_gke_2h;do{{int _183i_=step1B_gke_3h;do{{(*(double *)(_183i_*(ssize_t)sizeof(struct GKETERMS_)+_182i_*step1B_gke_4i+_181i_*step1B_gke_5i+(char*)&(*(struct GKETERMS_*)(step1B_gke_170w)).scaleENER_))*=step1B_gke_180m ;}_183i_--;}while(_183i_>=0);}_182i_--;}while(_182i_>=0);}_181i_--;}while(_181i_>=0);}} }{ double step1B_gke_184m;
step1B_gke_184m=0.5/(double)(nftot_);
{  {int _185i_=step1B_gke_169h;do{{int _186i_=step1B_gke_2h;do{{int _187i_=step1B_gke_3h;do{{(*(double *)(_187i_*(ssize_t)sizeof(struct GKETERMS_)+_186i_*step1B_gke_4i+_185i_*step1B_gke_5i+(char*)&(*(struct GKETERMS_*)(step1B_gke_170w)).scalePROD_))*=step1B_gke_184m ;}_187i_--;}while(_187i_>=0);}_186i_--;}while(_186i_>=0);}_185i_--;}while(_185i_>=0);}} }}};
     step1B_gke_188h=ny_-2*IY1_;
step1B_gke_189h=ny_-2*IY1_;
  {int _190i_=step1B_gke_188h;do{{  {int _191i_=gkedata_110h;do{{if((ssize_t)sizeof(struct GKETERMS_)==(ssize_t)sizeof(struct GKETERMS_)&&(ssize_t)sizeof(struct GKETERMS_)==(ssize_t)sizeof(struct GKETERMS_)){if(!(fseeko(gkedata_,_191i_*(off_t)gkedata_112i+_190i_*(off_t)gkedata_113i+(*(int*)(IY1_*(ssize_t)sizeof(int)+startpos_))*(off_t)gkedata_113i,SEEK_SET)==0&&fwrite(_191i_*step1B_gke_4i+_190i_*step1B_gke_5i+IY1_*step1B_gke_5i+gke_,(ssize_t)sizeof(struct GKETERMS_),gkedata_111h+1,gkedata_)==gkedata_111h+1))ioerr(gkedata_);}else{  {int _192i_=gkedata_111h;do{{if(!(fseeko(gkedata_,_192i_*(off_t)(ssize_t)sizeof(struct GKETERMS_)+_191i_*(off_t)gkedata_112i+_190i_*(off_t)gkedata_113i+(*(int*)(IY1_*(ssize_t)sizeof(int)+startpos_))*(off_t)gkedata_113i,SEEK_SET)==0&&fwrite((struct GKETERMS_*)(_192i_*(ssize_t)sizeof(struct GKETERMS_)+_191i_*step1B_gke_4i+_190i_*step1B_gke_5i+IY1_*step1B_gke_5i+gke_),(ssize_t)sizeof(struct GKETERMS_),1,gkedata_)==1))ioerr(gkedata_);}_192i_--;}while(_192i_>=0);}};}_191i_--;}while(_191i_>=0);}}_190i_--;}while(_190i_>=0);}  t4_=wallclock_1wallclock(); 
      fprintf(stdout,"""iproc=""\t%d\t""   ""\t""   ""\t""   ""\t""Writing took ""\t%g\t"" seconds""",iproc_    ,t4_-t3_ );putc('\n',stdout);
  IY1_+=1;};}outer_exit:;
freemem(&R_f);if_+= 2;};}files_exit:;

errfclose(&gkedata_);
errfclose(&uiujimage_);

freemem(es);return 0;}