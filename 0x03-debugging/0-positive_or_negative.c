#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints output dependingon inpts
 *
 * Return: 0 if sucessful
 */
int positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
int main(void)
{
	int i;

	i = 0;
	positve_or_negative(i);

	return (0);
}
