#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strcpy - copy string from source to dest
*
* @dest: destination
* src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = strlen(src);

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


