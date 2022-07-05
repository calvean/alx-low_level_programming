#include "main.h"
/**
 * main prints putchar
 *
 * Return: 0 always
 */
int main(void)
{
	char putch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'}
	unsigned int c;

	for (c =0; c < sizeof(putch); c++)
	{
		_putchar(putchar[c]);
	}
	_putchar('\n');
	return (0);
}
