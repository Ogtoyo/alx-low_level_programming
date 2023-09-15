#include "main.h"
#include <stdio.h>

/**
 *print_number - a function that prints an integer
 *@n: print int
 */

void print_number(int n)
{
	unsigned int d;

	d = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;

	}

	while (n / d >= 10)
	{
		d *= 10;
	}

	for (; d >= 1; d /= 10)
	{
		_putchar((n / d) % 10 + '0');
	}

}
