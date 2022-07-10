#include "main.h"

/**
* print_triangle - prints a triangle
*
* @size: seze of triangle
* Return: triangle
*/
void print_triangle(int size)
{
	int i, space, rows, k = 0;

	rows = size;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= rows; i++, k = 0)
		{
			for (space = 1; space <= rows - i; space++)
			{
				_putchar(' ');
			}
			while (k != i)
			{
				_putchar(35);
				k++;
			}
			_putchar(10);
		}
	}
}
