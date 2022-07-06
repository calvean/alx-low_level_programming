#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; i++)
	{
		if (i > 98)
			break;
		if (i == 98)
			printf("%d\n", i);
		else
			printf("%d, ");
	}
}

