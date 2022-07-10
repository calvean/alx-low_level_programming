#include <stdio.h>
/**
* main - prints 1-100, multiplles of 3 print fizz, multipules of 5 print buzz
*
* Return: 0 always
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if (((i % 3) == 0) || ((i % 5) == 0))
		{
			if ((i % 3) == 0)
			{
				printf("Fizz ");
			}
			if ((i % 5) == 0)
			{
				printf("Buzz ");
			}
		}
		else
			printf("%d ", i);
	}
	return (0);
}
