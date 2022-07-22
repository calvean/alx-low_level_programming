#include "main.h"
/**
 * _isupper - checks if alpha
 *
 * @c: int of function
 * Return: 0 always
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
