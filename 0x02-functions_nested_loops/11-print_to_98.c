#include "main.h"
/**
 * print_to_98 - print natural numbers
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
}

