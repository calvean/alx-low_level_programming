#include "main.h"
/**
 * print_alphabet_x10 - print lowercase x10
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int i, c;
	
	for (i = 0; i < 10; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar(10);
	}
}
