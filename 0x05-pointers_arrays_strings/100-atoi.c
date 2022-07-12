#include <stdio.h>
#include "main.h"
 
int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;
	

	/* Check for negative numbers */
	if(s[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	while(s[i] != '\0')
	{
		if(s[i] >= '0' && s[i] <= '9')
			num = num * 10 + s[i] - '0';
		else
		{
			return (0);
			break;
		}
		i++;
	}
	/* multiply number with sign to make it negative number if sign < 0*/
	num = num * sign;
	return (num);
}
