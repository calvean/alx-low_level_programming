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

	printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(charType));
	printf("size of an int: %lu byte(s)\n",(unsigned long)sizeof(intType));
	printf("size of a long int: %lu byte(s)\n",(unsigned long)sizeof(longintType));
	printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(longlongintType));
	printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(floatType));
	return (0);
}
