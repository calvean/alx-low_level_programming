#include <stdio.h>
/**
 * main - prints combinations
 *
 * Return: 0 sucess 
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				putch(i);
				putchar(j);
			}
		}
	}
	return (0);
}

