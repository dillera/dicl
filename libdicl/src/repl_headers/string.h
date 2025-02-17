#ifndef LIBDICL_STRING_H
#define LIBDICL_STRING_H

#if defined(__GNUC__)
#include_next <string.h>
#else
#include "/usr/include/string.h"
#endif

#if defined(__cplusplus)
extern "C" {
#endif

/* Missing pieces */
void *mempcpy(void *, const void* ,size_t);

char *stpcpy(char *, const char*);
char *stpncpy(char *, const char*, size_t);

char * strchrnul(const char *, int);

int strerror_r(int, char*, size_t);

char *strndup(const char*, size_t);

char *strsep(char **, char*);

#if defined(__cplusplus)
}
#endif

#endif
