#include "main.h"
#include <stdio.h>

/**
 * _strcat- check the code
 *
 * @dest: destination
 * @src: source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;
	while ((dest[i++] = src[j++]) != '\0')
		;
	return (dest);
}
