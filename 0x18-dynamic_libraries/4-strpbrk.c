#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to check
 * @accept: string to check against
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int l, m;

	for (l = 0; s[l]; l++)
	{
		for (m = 0; accept[m]; m++)
		{
			if (s[l] == accept[m])
				break;
		}
		if (accept[m])
			return (s + l);
	}
	return (0);
}
