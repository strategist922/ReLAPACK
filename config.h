#ifndef RELAPACK_CONFIG_H
#define RELAPACK_CONFIG_H

// ReLAPACK configuration file.
// See also config.md


///////////////////////////////
// BLAS/LAPACK obect symbols //
///////////////////////////////

// BLAS routines linked against have a trailing underscore
#define BLAS_UNDERSCORE 1
// LAPACK routines linked against have a trailing underscore
#define LAPACK_UNDERSCORE BLAS_UNDERSCORE

// complex BLAS/LAPACK routines return their result in the first argument
// This option must be enabled when linking to MKL or Accelerate for ctrsyl and
// ztrsyl to work.
#define COMPLEX_FUNCTIONS_AS_ROUTINES 0


////////////////////////////
// use malloc in ReLAPACK //
////////////////////////////

#define ALLOW_MALLOC 1
// allow malloc in xsygst for improved performance
#define XSYGST_ALLOW_MALLOC ALLOW_MALLOC
// allow malloc in xsytrf if the passed work buffer is too small
#define XSYTRF_ALLOW_MALLOC ALLOW_MALLOC


////////////////////////////////
// LAPACK routine replacement //
////////////////////////////////
// The following macros specify which routines are included in the library under
// LAPACK's symbol names: 1 included, 0 not included

#define INCLUDE_XLAUUM 1
#define INCLUDE_SLAUUM INCLUDE_XLAUUM
#define INCLUDE_DLAUUM INCLUDE_XLAUUM
#define INCLUDE_CLAUUM INCLUDE_XLAUUM
#define INCLUDE_ZLAUUM INCLUDE_XLAUUM

#define INCLUDE_XSYGST 1
#define INCLUDE_SSYGST INCLUDE_XSYGST
#define INCLUDE_DSYGST INCLUDE_XSYGST
#define INCLUDE_CHEGST INCLUDE_XSYGST
#define INCLUDE_ZHEGST INCLUDE_XSYGST

#define INCLUDE_XTRTRI 1
#define INCLUDE_STRTRI INCLUDE_XTRTRI
#define INCLUDE_DTRTRI INCLUDE_XTRTRI
#define INCLUDE_CTRTRI INCLUDE_XTRTRI
#define INCLUDE_ZTRTRI INCLUDE_XTRTRI

#define INCLUDE_XPOTRF 1
#define INCLUDE_SPOTRF INCLUDE_XPOTRF
#define INCLUDE_DPOTRF INCLUDE_XPOTRF
#define INCLUDE_CPOTRF INCLUDE_XPOTRF
#define INCLUDE_ZPOTRF INCLUDE_XPOTRF

#define INCLUDE_XSYTRF 1
#define INCLUDE_SSYTRF INCLUDE_XSYTRF
#define INCLUDE_DSYTRF INCLUDE_XSYTRF
#define INCLUDE_CSYTRF INCLUDE_XSYTRF
#define INCLUDE_CHETRF INCLUDE_XSYTRF
#define INCLUDE_ZSYTRF INCLUDE_XSYTRF
#define INCLUDE_ZHETRF INCLUDE_XSYTRF
#define INCLUDE_SSYTRF_ROOK INCLUDE_SSYTRF
#define INCLUDE_DSYTRF_ROOK INCLUDE_DSYTRF
#define INCLUDE_CSYTRF_ROOK INCLUDE_CSYTRF
#define INCLUDE_CHETRF_ROOK INCLUDE_CHETRF
#define INCLUDE_ZSYTRF_ROOK INCLUDE_ZSYTRF
#define INCLUDE_ZHETRF_ROOK INCLUDE_ZHETRF

#define INCLUDE_XGETRF 1
#define INCLUDE_SGETRF INCLUDE_XGETRF
#define INCLUDE_DGETRF INCLUDE_XGETRF
#define INCLUDE_CGETRF INCLUDE_XGETRF
#define INCLUDE_ZGETRF INCLUDE_XGETRF

#define INCLUDE_XTRSYL 1
#define INCLUDE_STRSYL INCLUDE_XTRSYL
#define INCLUDE_DTRSYL INCLUDE_XTRSYL
#define INCLUDE_CTRSYL INCLUDE_XTRSYL
#define INCLUDE_ZTRSYL INCLUDE_XTRSYL

#define INCLUDE_XTGSYL 1
#define INCLUDE_STGSYL INCLUDE_XTGSYL
#define INCLUDE_DTGSYL INCLUDE_XTGSYL
#define INCLUDE_CTGSYL INCLUDE_XTGSYL
#define INCLUDE_ZTGSYL INCLUDE_XTGSYL


/////////////////////
// crossover sizes //
/////////////////////
 
// default crossover size
#define CROSSOVER 24

// individual crossover sizes
#define CROSSOVER_XLAUUM CROSSOVER
#define CROSSOVER_SLAUUM CROSSOVER_XLAUUM
#define CROSSOVER_DLAUUM CROSSOVER_XLAUUM
#define CROSSOVER_CLAUUM CROSSOVER_XLAUUM
#define CROSSOVER_ZLAUUM CROSSOVER_XLAUUM

#define CROSSOVER_XSYGST CROSSOVER
#define CROSSOVER_SSYGST CROSSOVER_XSYGST
#define CROSSOVER_DSYGST CROSSOVER_XSYGST
#define CROSSOVER_CHEGST CROSSOVER_XSYGST
#define CROSSOVER_ZHEGST CROSSOVER_XSYGST

#define CROSSOVER_XTRTRI CROSSOVER
#define CROSSOVER_STRTRI CROSSOVER_XTRTRI
#define CROSSOVER_DTRTRI CROSSOVER_XTRTRI
#define CROSSOVER_CTRTRI CROSSOVER_XTRTRI
#define CROSSOVER_ZTRTRI CROSSOVER_XTRTRI

#define CROSSOVER_XPOTRF CROSSOVER
#define CROSSOVER_SPOTRF CROSSOVER_XPOTRF
#define CROSSOVER_DPOTRF CROSSOVER_XPOTRF
#define CROSSOVER_CPOTRF CROSSOVER_XPOTRF
#define CROSSOVER_ZPOTRF CROSSOVER_XPOTRF

#define CROSSOVER_XSYTRF CROSSOVER
#define CROSSOVER_SSYTRF CROSSOVER_XSYTRF
#define CROSSOVER_DSYTRF CROSSOVER_XSYTRF
#define CROSSOVER_CSYTRF CROSSOVER_XSYTRF
#define CROSSOVER_CHETRF CROSSOVER_XSYTRF
#define CROSSOVER_ZSYTRF CROSSOVER_XSYTRF
#define CROSSOVER_ZHETRF CROSSOVER_XSYTRF
#define CROSSOVER_SSYTRF_ROOK CROSSOVER_SSYTRF
#define CROSSOVER_DSYTRF_ROOK CROSSOVER_DSYTRF
#define CROSSOVER_CSYTRF_ROOK CROSSOVER_CSYTRF
#define CROSSOVER_CHETRF_ROOK CROSSOVER_CHETRF
#define CROSSOVER_ZSYTRF_ROOK CROSSOVER_ZSYTRF
#define CROSSOVER_ZHETRF_ROOK CROSSOVER_ZHETRF

#define CROSSOVER_XGETRF CROSSOVER
#define CROSSOVER_SGETRF CROSSOVER_XGETRF
#define CROSSOVER_DGETRF CROSSOVER_XGETRF
#define CROSSOVER_CGETRF CROSSOVER_XGETRF
#define CROSSOVER_ZGETRF CROSSOVER_XGETRF

#define CROSSOVER_XTRSYL CROSSOVER
#define CROSSOVER_STRSYL CROSSOVER_XTRSYL
#define CROSSOVER_DTRSYL CROSSOVER_XTRSYL
#define CROSSOVER_CTRSYL CROSSOVER_XTRSYL
#define CROSSOVER_ZTRSYL CROSSOVER_XTRSYL

#define CROSSOVER_XTGSYL CROSSOVER
#define CROSSOVER_STGSYL CROSSOVER_XTGSYL
#define CROSSOVER_DTGSYL CROSSOVER_XTGSYL
#define CROSSOVER_CTGSYL CROSSOVER_XTGSYL
#define CROSSOVER_ZTGSYL CROSSOVER_XTGSYL

// sytrf helper routine
#define CROSSOVER_SGEMM_TR CROSSOVER_SSYTRF
#define CROSSOVER_DGEMM_TR CROSSOVER_DSYTRF
#define CROSSOVER_CGEMM_TR CROSSOVER_CHETRF
#define CROSSOVER_ZGEMM_TR CROSSOVER_ZHETRF

#endif /* RELAPACK_CONFIG_H */
