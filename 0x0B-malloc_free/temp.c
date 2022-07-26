#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	int i=0;
	int n = 0;
	int j = 0;
	
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	else
	{
		while (*(s1 + i) != '\0')
			j++;
		while (*(s2 + i) != '\0')
		{
			i++;
			n++;
		}
		s1 = malloc((i * sizeof(char)) + (j * sizeof(char)));
		for (i = 0; i <= n; i++)
		{
			s1[i] = s2[i];
		}
	}
	return(s1);
}
