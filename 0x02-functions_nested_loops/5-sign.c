#include "main.h"
/***
 * print_sign - prints sign
 *
 * @n: interger of function
 * Return: 0 always
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
