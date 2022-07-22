#include <stdio.h>

/**
 * main - prints all recieved args
 *
 * @argc: number args passed
 * @argv: arg vector of pointers
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
