#include "main.h"
/**
 * _islower - prints lower case
 *
 * Return: 0 if lower, 1 if upper
 */
int _islower(int c)
{
	int r;

	for (r = 0; r <= 122; r++)
	{
		if (_islower(r))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
