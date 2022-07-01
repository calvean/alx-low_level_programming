#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: 0 is successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar(10);
	return (0);
}
