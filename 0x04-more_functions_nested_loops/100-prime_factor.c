#include<stdio.h>
#include<math.h>

/**
* getMaxPrimeFactor - prints max prime
*
* @n: integer
* Return: max
*/
int getMaxPrimeFactor(long int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
	max = n;
	}
	return (max);
}
/**
* main - prints max
*
* Return: max
*/
int main(void)
{
	long int n;

	n = 612852475143;
	printf("%d\n", getMaxPrimeFactor(n));

	return (0);
}
