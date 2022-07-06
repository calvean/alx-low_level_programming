#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;
	/* whitespace*/
	i = 98;
	positive_or_negative(i);
	return (0);
}
/**
 * positive_or_negative - checkes if its positive or negative
 *
 *@i: integer
 * Return: 0 if sucessful
 */
int positive_or_negative(i)
{
	int n;
	/* whitespace */
	srand(time(0));
	n = i;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	/* whitespace */
	return (0);
}
