#include "main.h"

/**
 * sqrt_check - checks square root of j
 * @g:guess at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int check_root(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (check_root(i + 1, j));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_root(1, n));
}
