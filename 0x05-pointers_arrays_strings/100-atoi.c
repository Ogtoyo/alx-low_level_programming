#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: pointer to string
 * Return: alaways 0
 */

int _atoi(char *s)
{
	int sign, result, i;

	sign = 1;
	result = 0;

	for (i = 0; s[i] == ' ' || s[i] == '+' || s[i] == '-'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	result *= sign;

	return (result);
}
