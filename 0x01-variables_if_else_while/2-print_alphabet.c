#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: 0 is successful
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	
	return (0);
}
