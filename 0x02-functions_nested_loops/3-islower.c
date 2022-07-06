#include "main.h"
/**
 * _islower - prints lower case
 *
 * @c: parameter
  * Return: 0 if lower, 1 if upper
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
