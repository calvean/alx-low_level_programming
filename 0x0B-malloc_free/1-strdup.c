#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
		i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		s[j] = str[j];
		i--;
		j++;
	}
	s[j + 1] = '\0';
	return (s);
}
