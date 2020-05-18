/* src/rrd_config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef RRD_CONFIG_H
#define RRD_CONFIG_H

#include <Arduino.h>

/* IEEE can be prevented from raising signals with fpsetmask(0) */
#undef MUST_DISABLE_FPMASK

/* IEEE math only works if SIGFPE gets actively set to IGNORE */
#undef MUST_DISABLE_SIGFPE

/* realloc does not support NULL as argument */
#undef NO_NULL_REALLOC

/* lets enable madvise defines in NetBSD */
#if defined(__NetBSD__)
# if !defined(_NETBSD_SOURCE)
#  define _NETBSD_SOURCE
# endif
#endif



/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* disable flock calls in rrdtool */
#undef DISABLE_FLOCK

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#undef ENABLE_NLS

/* Define to 1 if you have the `asprintf' function. */
#undef HAVE_ASPRINTF
#define HAVE_ASPRINTF 1

/* set to 1 if msync with MS_ASYNC fails to update mtime */
#undef HAVE_BROKEN_MS_ASYNC

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
#undef HAVE_CFLOCALECOPYCURRENT

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
#undef HAVE_CFPREFERENCESCOPYAPPVALUE

/* Define to 1 if you have the `chdir' function. */
#undef HAVE_CHDIR
#define HAVE_CHDIR 1

/* Define to 1 if you have the `chroot' function. */
#undef HAVE_CHROOT

/* Define to 1 if you have the `class' function. */
#undef HAVE_CLASS
#define HAVE_CLASS 1

/* Define to 1 if you have the <ctype.h> header file. */
#undef HAVE_CTYPE_H
#define HAVE_CTYPE_H 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#undef HAVE_DCGETTEXT
#define HAVE_DCGETTEXT 0

/* Define to 1 if you have the declaration of `madvise', and to 0 if you
   don't. */
#undef HAVE_DECL_MADVISE
#define HAVE_DECL_MADVISE 0

/* Define to 1 if you have the declaration of `posix_fadvise', and to 0 if you
   don't. */
#undef HAVE_DECL_POSIX_FADVISE
#define HAVE_DECL_POSIX_FADVISE 0

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#undef HAVE_DECL_STRERROR_R
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#undef HAVE_DIRENT_H
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H
#define HAVE_DLFCN_H 0

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
#undef HAVE_DOPRNT
#define HAVE_DOPRNT 0

/* Define to 1 if you have the <errno.h> header file. */
#undef HAVE_ERRNO_H
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#undef HAVE_FCNTL_H
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdatasync' function. */
#undef HAVE_FDATASYNC
#define HAVE_FDATASYNC 1

/* Define to 1 if you have the <features.h> header file. */
#undef HAVE_FEATURES_H
//#define HAVE_FEATURES_H 1

/* Define to 1 if you have the `finite' function. */
#undef HAVE_FINITE
#define HAVE_FINITE 1

/* Define to 1 if you have the <float.h> header file. */
#undef HAVE_FLOAT_H

/* Define to 1 if you have the `fpclass' function. */
#undef HAVE_FPCLASS

/* Define to 1 if you have the `fpclassify' function. */
#undef HAVE_FPCLASSIFY
#define HAVE_FPCLASSIFY 1

/* Define to 1 if you have the `fp_class' function. */
#undef HAVE_FP_CLASS

/* Define to 1 if you have the <fp_class.h> header file. */
#undef HAVE_FP_CLASS_H

/* Define to 1 if you have the `fsync' function. */
#undef HAVE_FSYNC
#define HAVE_FSYNC 1

/* Define to 1 if you have the `getaddrinfo' function. */
#undef HAVE_GETADDRINFO
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getgid' function. */
#undef HAVE_GETGID
#define HAVE_GETGID 1

/* Define to 1 if you have the `getgrnam' function. */
#undef HAVE_GETGRNAM
#define HAVE_GETGRNAM 1

/* Define to 1 if you have the `getpagesize' function. */
#undef HAVE_GETPAGESIZE
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpwnam' function. */
#undef HAVE_GETPWNAM
#define HAVE_GETPWNAM 1

/* Define to 1 if you have the `getrusage' function. */
#undef HAVE_GETRUSAGE
#define HAVE_GETRUSAGE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#undef HAVE_GETTEXT

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getuid' function. */
#undef HAVE_GETUID
#define HAVE_GETUID 1

/* Define to 1 if you have the `get_current_dir_name' function. */
#undef HAVE_GET_CURRENT_DIR_NAME
#define HAVE_GET_CURRENT_DIR_NAME 1

/* Define to 1 if you have the <glob.h> header file. */
#undef HAVE_GLOB_H
#define HAVE_GLOB_H 1

/* Define to 1 if you have the <grp.h> header file. */
#undef HAVE_GRP_H
#define HAVE_GRP_H 1

/* our glib has g_regex_new */
#undef HAVE_G_REGEX_NEW

/* Define to 1 if you have the `hosts_access' function. */
#undef HAVE_HOSTS_ACCESS

/* Define if you have the iconv() function and it works. */
#undef HAVE_ICONV
#define HAVE_ICONV 1

/* Define to 1 if you have the <ieeefp.h> header file. */
#undef HAVE_IEEEFP_H

/* Define to 1 if the system has the type `intmax_t'. */
#undef HAVE_INTMAX_T
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isfinite' function. */
#undef HAVE_ISFINITE
#define HAVE_ISFINITE 1

/* Define to 1 if you have the `isinf' function. */
#undef HAVE_ISINF
#define HAVE_ISINF 1

/* Define to 1 if you have the `isnan' function. */
#undef HAVE_ISNAN
#define HAVE_ISNAN 1

/* Define to 1 if you have the <langinfo.h> header file. */
#undef HAVE_LANGINFO_H
#define HAVE_LANGINFO_H 1

/* have got libdbi installed */
#undef HAVE_LIBDBI

/* Define to 1 if you have the <libgen.h> header file. */
#undef HAVE_LIBGEN_H
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the `m' library (-lm). */
#undef HAVE_LIBM

/* have got librados installed */
#undef HAVE_LIBRADOS

/* have got libwrap installed */
#undef HAVE_LIBWRAP

/* Define to 1 if you have the `localeconv' function. */
#undef HAVE_LOCALECONV
#define HAVE_LOCALECONV 1

/* Define to 1 if you have the <locale.h> header file. */
#undef HAVE_LOCALE_H
#define HAVE_LOCALE_H 1

/* Define to 1 if the system has the type `long double'. */
#undef HAVE_LONG_DOUBLE
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if the system has the type `long long int'. */
#undef HAVE_LONG_LONG_INT
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the <lualib.h> header file. */
#undef HAVE_LUALIB_H

/* Define to 1 if you have the <lua.h> header file. */
#undef HAVE_LUA_H

/* Define to 1 if you have the `madvise' function. */
#undef HAVE_MADVISE

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <math.h> header file. */
#undef HAVE_MATH_H
#define HAVE_MATH_H 1

/* Define to 1 if you have the `mbstowcs' function. */
#undef HAVE_MBSTOWCS
#define HAVE_MBSTOWCS 1

/* Define to 1 if you have the `memmove' function. */
#undef HAVE_MEMMOVE
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mktime' function. */
#undef HAVE_MKTIME
#define HAVE_MKTIME 1

/* Define to 1 if you have the `mmap' function. */
#undef HAVE_MMAP

/* Define to 1 if you have the `munmap' function. */
#undef HAVE_MUNMAP

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the `nl_langinfo' function. */
#undef HAVE_NL_LANGINFO

/* Define to 1 if you have the `opendir' function. */
#undef HAVE_OPENDIR
#define HAVE_OPENDIR 1

/* Define to 1 if you have the `pango_font_map_create_context' function. */
#undef HAVE_PANGO_FONT_MAP_CREATE_CONTEXT

/* we have pcre to replace missing regexp support form glib */
#undef HAVE_PCRE_COMPILE
#define HAVE_PCRE_COMPILE 1

/* Define to 1 if you have the `posix_fadvise' function. */
#undef HAVE_POSIX_FADVISE

/* Define to 1 if you have the `posix_fallocate' function. */
#undef HAVE_POSIX_FALLOCATE

/* Define to 1 if you have the `posix_madvise' function. */
#undef HAVE_POSIX_MADVISE

/* Define if you have POSIX threads libraries and header files. */
#undef HAVE_PTHREAD
#define HAVE_PTHREAD 1

/* Define to 1 if the system has the type `ptrdiff_t'. */
#undef HAVE_PTRDIFF_T
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the <pwd.h> header file. */
#undef HAVE_PWD_H
#define HAVE_PWD_H 1

/* Define to 1 if you have the `readdir' function. */
#undef HAVE_READDIR
#define HAVE_READDIR 1

/* is rrd_graph supported by this install */
#undef HAVE_RRD_GRAPH
#define HAVE_RRD_GRAPH 0

/* is rrd_restore supported by this install */
#undef HAVE_RRD_RESTORE
#define HAVE_RRD_RESTORE 0

/* Define to 1 if you have the `setgid' function. */
#undef HAVE_SETGID
#define HAVE_SETGID 1

/* Define to 1 if you have the `setuid' function. */
#undef HAVE_SETUID
#define HAVE_SETUID 1

/* Define to 1 if you have the <signal.h> header file. */
#undef HAVE_SIGNAL_H
#define HAVE_SIGNAL_H 1

/* have two argument posix sigwait */
#undef HAVE_SIGWAIT
#define HAVE_SIGWAIT 1

/* Define to 1 if you have the `sigwaitinfo' function. */
#undef HAVE_SIGWAITINFO
#define HAVE_SIGWAITINFO 1

/* Define to 1 if you have the `snprintf' function. */
#undef HAVE_SNPRINTF
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `socket' function. */
#undef HAVE_SOCKET
#define HAVE_SOCKET 1

/* Define to 1 if you have the <stdarg.h> header file. */
#undef HAVE_STDARG_H

/* Define to 1 if you have the <stddef.h> header file. */
#undef HAVE_STDDEF_H

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#undef HAVE_STDIO_H
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#undef HAVE_STRCHR
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strerror' function. */
#undef HAVE_STRERROR
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
#undef HAVE_STRERROR_R
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the `strftime' function. */
#undef HAVE_STRFTIME
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strndup' function. */
#undef HAVE_STRNDUP
#define HAVE_STRNDUP 1

/* Define to 1 if `decimal_point' is a member of `struct lconv'. */
#undef HAVE_STRUCT_LCONV_DECIMAL_POINT
#define HAVE_STRUCT_LCONV_DECIMAL_POINT 1

/* Define to 1 if `thousands_sep' is a member of `struct lconv'. */
#undef HAVE_STRUCT_LCONV_THOUSANDS_SEP
#define HAVE_STRUCT_LCONV_THOUSANDS_SEP 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H
#define HAVE_SYS_DIR_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#undef HAVE_SYS_MMAN_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/param.h> header file. */
#undef HAVE_SYS_PARAM_H
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#undef HAVE_SYS_RESOURCE_H
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#undef HAVE_SYS_TIMES_H
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H
#define HAVE_SYS_TYPES_H 1

/* is there an external timezone variable instead ? */
#undef HAVE_TIMEZONE

/* does tm have a tm_gmtoff member */
#undef HAVE_TM_GMTOFF

/* Define to 1 if you have the `tzset' function. */
#undef HAVE_TZSET
#define HAVE_TZSET 1

/* Define to 1 if the system has the type `uintmax_t'. */
#undef HAVE_UINTMAX_T
#define HAVE_UINTMAX_T 1

/* Define to 1 if the system has the type `uintptr_t'. */
#undef HAVE_UINTPTR_T
#define HAVE_UINTPTR_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `unsigned long long int'. */
#undef HAVE_UNSIGNED_LONG_LONG_INT
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the <varargs.h> header file. */
#undef HAVE_VARARGS_H

/* Define to 1 if you have the `vasprintf' function. */
#undef HAVE_VASPRINTF
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `va_copy' function or macro. */
#undef HAVE_VA_COPY
#define HAVE_VA_COPY 1

/* Define to 1 if you have the `vprintf' function. */
#undef HAVE_VPRINTF
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#undef HAVE_VSNPRINTF
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `_NL_TIME_WEEK_1STDAY' function. */
#undef HAVE__NL_TIME_WEEK_1STDAY

/* Define to 1 if you have the `__va_copy' function or macro. */
#undef HAVE___VA_COPY

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#undef LT_OBJDIR

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING
/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION
/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
#undef PTHREAD_CREATE_JOINABLE

/* Vertical label angle: -90.0 (default) or 90.0 */
#undef RRDGRAPH_YLEGEND_ANGLE

/* The size of `long int', as computed by sizeof. */
#undef SIZEOF_LONG_INT
#define SIZEOF_LONG_INT 4

/* The size of `time_t', as computed by sizeof. */
#undef SIZEOF_TIME_T
#define SIZEOF_TIME_T 4

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#undef STRERROR_R_CHAR_P
#define STRERROR_R_CHAR_P 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#undef TIME_WITH_SYS_TIME
#define TIME_WITH_SYS_TIME 1

/* the real name of tm_gmtoff */
#undef TM_GMTOFF

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#undef TM_IN_SYS_TIME

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Version number of package */
#undef VERSION
#define VERSION 1.7.1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to rpl_asprintf if the replacement function should be used. */
#undef XXXasprintf

/* Define to rpl_snprintf if the replacement function should be used. */
#undef XXXsnprintf

/* Define to rpl_vasprintf if the replacement function should be used. */
#undef XXXvasprintf

/* Define to rpl_vsnprintf if the replacement function should be used. */
#undef XXXvsnprintf

/* Define to 1 if on MINIX. */
#undef _MINIX

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
#undef _POSIX_1_SOURCE

/* Define to 1 if you need to in order for `stat' and other things to work. */
#undef _POSIX_SOURCE

/* Define to empty if `const' does not conform to ANSI C. */

/* Define to the widest signed integer type if <stdint.h> and <inttypes.h> do
   not define. */

/* Define to `unsigned int' if <sys/types.h> does not define. */

/* Define to the widest unsigned integer type if <stdint.h> and <inttypes.h>
   do not define. */

/* Define to the type of an unsigned integer type wide enough to hold a
   pointer, if such a type exists, and if the system does not define it. */



#ifdef MUST_HAVE_MALLOC_MALLOC_H
#  include <malloc/malloc.h>
#endif

#define PACKAGE_VERSION "1.3.9"
#define NUMVERS 1.3009
#include "rrd_config_bottom.h"

#endif

