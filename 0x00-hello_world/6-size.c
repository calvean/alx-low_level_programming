#include <stdio.h>
/**
 * main - prints sizes
 *
 * Return: 0 if sucess
 */
unsigned long main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("size of a char : %lu byte(s)\n", sizeof(b));
	printf("size of an int : %lu byte(s)\n", sizeof(a));
	printf("size of long int : %lu byte(s)\n", sizeof(c));
	printf("size of a long long int : %lu bytes(s)\n", sizeof(d));
	printf("size of a float : %lu byte(s)\n", sizeof(f));

	return (0);
}
