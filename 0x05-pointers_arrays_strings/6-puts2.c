#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - prints string
*
*@str: string
* Return: void
*/
void puts2(char *str)
{
	int n = strlen(str);
	int i;

	for (i = 0; i < n; i++)
	{
		/*char ch = str[i];*/

		if (i % 2 != 0)
			continue;
		printf("%c", str[i]);
	}
}
