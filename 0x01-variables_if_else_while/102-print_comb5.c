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
	int m;
	/*my code*/
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (m =48; m <= 57; m++)
				{
					if (m > k && k > j && j > i)
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(m);
						
						if (i == 54 && j == 55 && k == 56 && m == 57)
							continue;
						/*prtint space*/
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
