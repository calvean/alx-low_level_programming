#include "main.h"
/**
 * main - print alphabet
 *
 * Return: 0 always
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_print_alphabet(c);
	}
	_putchar(10);
	return (0);
}
