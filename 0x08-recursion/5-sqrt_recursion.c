#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *squ_finder - squres funxtion
 *@n: pointer of string
 *@num: guessed num
 *Return: Always 0
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

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squ_finder(n, 0));
}
