#include <stdio.h>
/**
 * main - Prints reverse alphabet
 *
 * Return: 0 if sucess
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
