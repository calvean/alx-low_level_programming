#ifndef _0_VARIADIC_FUNCTIONS_H_
#define _0_VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* _0_VARIADIC_FUNCTIONS_H_ */
