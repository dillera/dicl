#ifndef LIBDICL_STDLIB_H
#define LIBDICL_STDLIB_H

#if defined(__GNUC__)
#include_next <stdlib.h>
#else
#include "/usr/include/stdlib.h"
#endif

#if defined(__cplusplus)
extern "C" {
#endif

#undef strtod
#define strtod rpl_strtod
extern double rpl_strtod(const char *, char **);
#undef strtold
#define strtold rpl_strtold
extern long double rpl_strtold(const char *, char **);

/* Extra things not in Irix libc */
int setenv(const char *name, const char*value, int overwrite);
int unsetenv(const char *name);

const char *getprogname(void);
void setprogname(const char *progname);

char *mkdtemp(char *ftemplate);

void qsort_r(void *, size_t, size_t,
	     int(*)(const void*,const void*, void*),
	     void *);

#if defined(__cplusplus)
}
#endif

#endif
