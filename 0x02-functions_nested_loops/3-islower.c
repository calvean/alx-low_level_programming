#include "main.h"
/**
 * _islower - prints lower case
 *
 * Return: 0 if lower, 1 if upper
 */
int _islower(int c)
{
	for (c = 0; c <= 122; c++)
	{
		if (_islower(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
