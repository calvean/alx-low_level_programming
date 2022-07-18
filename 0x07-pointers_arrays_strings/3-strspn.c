#include "main.h"

/**
 * _strspn - lengthof substring
 *
 * @s: string to check
 * @accept: string compare
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, m;

	for (l = 0; s[l]; l++)
	{
		for (m = 0; accept[m]; m++)
		{
			if (s[l] == accept[m])
				break;
		}
		if (!accept[m])
			break;
	}
	return (l);
}
