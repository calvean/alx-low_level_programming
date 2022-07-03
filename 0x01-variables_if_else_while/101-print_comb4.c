#include <stdio.h>
/**
 * main - prints combinations
 *
 * Return: 0 if sucess
 */
int main(void)
{
	int i;
	int j;
	int k;
	/*my code*/
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == 55 && j == 56 && k == 57)
						continue;
					/*prtint space*/
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
