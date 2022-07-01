#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints output dependingon inpts
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d ", n);
		printf("is %d and is greater than 5\n", last);
	}
	if (last == 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d and is 0\n", last);
	}
	if (last < 6 && last != 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d and is less than 6 and not 0\n", last);
	}

	return (0);
}
