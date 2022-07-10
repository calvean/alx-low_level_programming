#include "main.h"

/**
* print_line - prints a line
*
* @n: nline length
* Return: line
*/
void print_line(int n)
{
	int i = n;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
