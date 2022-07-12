#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* print_array - prints an array
*
* @a: array
* @n: integer
* Return: dest pointer
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
