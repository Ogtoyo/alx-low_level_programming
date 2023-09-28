#include "main.h"
#include <stdio.h>

/**
 * squ_finder - finds the natural square root of a number
 * @n: the number to find the square root of
 * @num: the current guess for the square root
 * Return: the natural square root of n if it exists, otherwise -1
 */

int squ_finder(int n, int num)
{
	if (num * num == n)
		return (num);

	else if (num * num < n)
	{
		return (squ_finder(n, num + 1));
	}

	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root of n if it exists, otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squ_finder(n, 0));
}
