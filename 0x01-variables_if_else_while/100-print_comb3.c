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

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
			}
		}
	}

	return (0);
}

