#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - prints half string
*
*@str: string
* Return: void
*/
void puts_half(char *str)
{
	int n = strlen(str) + 1;
	int i;

	if (n % 2 != 0)
	{
		for (i = (n - 1) / 2; i < n - 1; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		for (i = (n - 1) / 2; i <= n - 1; i++)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
