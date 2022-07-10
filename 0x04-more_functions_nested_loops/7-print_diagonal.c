#include "main.h"

/**
* print_diagonal - prints a line
*
* @n: diagonal line e length
* Return: line
*/
void print_diagonal(int n)
{
	int i = n;
	int j = n;

	for (i = 0; i < n; i++)
	{
		if (i <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(36);
			_putchar('\n');
		}
	}
}
