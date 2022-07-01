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
		printf("Last digit of %d is %d and is greater than 5\n", &n, &last);
	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", &n, &last);
	if (6 < last != 0)
		print("Last digit of %d is %d and is less than 6 but not 0\n", &n, &last);

	return (0);
}
