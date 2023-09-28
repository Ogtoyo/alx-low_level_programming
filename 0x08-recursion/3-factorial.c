#include "main.h"
#include <stdio.h>

/**
 *factorial - function that returns the factorial of a given number
 *
 *@n: pointer of string
 *Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
