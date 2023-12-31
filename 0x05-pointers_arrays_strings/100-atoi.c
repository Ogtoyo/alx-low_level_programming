#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: pointer to string
 * Return: alaways 0
 */

int _atoi(char *s)
{
	int sign, result, i, f;

	sign = 1;
	result = 0;
	f = 0;

	for (i = 0; s[i] == ' ' || s[i] == '+' || s[i] == '-'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			f = 1;

			if (result > INT_MAX || result < INT_MIN)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
		}

		else if (f)
		{
			break;
		}
	}

	result = sign * result;

	return ((int)(result));
}
