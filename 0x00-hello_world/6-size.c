#include <stdio.h>
/**
 * main - Prints size of memory allocated
 *
 * Return: 0 if program is sucessful
 */
int main(void)
{
	unsigned char charType;
	unsigned int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("size of a char: %lu byte(s)\n", sizeof(charType));
	printf("size of an int: %lu byte(s)\n", sizeof(intType));
	printf("size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("size of a long long int: %lu byte(s)\n", sizeof(longlongintType));
	printf("size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
