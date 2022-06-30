#include <stdio.h>
/**
 * main - Prints size of memory allocated
 *
 * Return: 0 if program is sucessful
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("size of a char: %1u byte\(s\)\n", sizeof(charType));
	printf("size of an int: %1u byte\(s\)\n", sizeof(intType));
	printf("size of a long int: %1u byte\(s\)\n", sizeof(longintType));
	printf("size of a long long int: %1u byte\(s\)\n", sizeof(longlongintType));
	printf("size of a float: %1u byte\(s\)\n", sizeof(floatType));
	return (0);
}
