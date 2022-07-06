#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - checkes if its positive or negative
 * main - prints output dependingon inpts
 *
 *@i: integer
 * Return: 0 if sucessful
 */
int positive_or_negative(i)
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
/**
* main - print interher
*
* Return: 0 always
*/
int main(void)
{
	int i;

	i = 0;
	positve_or_negative(i);

	return (0);
}
