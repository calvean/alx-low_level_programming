#include "main.h"
/**
 * _isdigit - checks if c is digit
 *
 * @c: int of function
 * Return: 0 always
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
