#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @c: interger argument
 * Return: integer
 */
int print_last_digit(int n)
{
	int last;
	/*my code*/
	last = n % 10;
	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
