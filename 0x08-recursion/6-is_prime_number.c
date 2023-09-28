#include "main.h"
#include <stdio.h>

/**
 * check_if - that returns 1 if the input integer is a prime number
 * @n: the prime number
 * @i: divisor
 * Return: the prime number
 */

int check_if(int n, int i)
{
	if (i == n)
		return (1);

	else if (n % i == 0)
		return (0);

	else
		return (check_if(n, i + 1));
}

/**
 * is_prime_number - that returns 1 if the input integer is a prime number
 * @n: the prime number
 * Return: the prime number
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	else
		return (check_if(n, 2));
}
