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

	printf("size of a char: %zu byte(s)", sizeof(charType));
	printf("size of a int : %zu byte(s)", sizeof(intType));
	printf("size of a long int : %zu byte(s)", sizeof(longintType));
	printf("size of a long long int : %zu byte(s)", sizeof(longlongintType));
	printf("size of a float : %zu byte(s)", sizeof(floatType));
	return (0);
}
