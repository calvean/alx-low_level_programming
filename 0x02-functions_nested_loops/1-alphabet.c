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
		print_alphabet(c);
		_putchar(c);
	}
	_putchar(10);
	return (0);
}
