#ifndef _0_VARIADIC_FUNCTIONS_H_
#define _0_VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;


#endif /* _0_VARIADIC_FUNCTIONS_H_ */
