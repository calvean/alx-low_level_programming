#include "main.h"

/**
 * check_prime - checks if number is prime
 * @i: factor check
 * @j: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (check_prime(i + 1, j));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
