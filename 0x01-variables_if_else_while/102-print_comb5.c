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
	int op1;
	int op2;
	/*my code*/
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (m = 48; m <= 57; m++)
				{
					op1 = (i * 10) + j;
					op2 = (k * 10) + m;
					if (op1 < op2)
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(m);
						
						if (i == 57 && j == 56 && k == 57 && m == 56)
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
