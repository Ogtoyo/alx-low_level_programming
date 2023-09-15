#include "main.h"
#include <stdio.h>

/**
 *print_number - a function that prints an integer
 *@n: print int
 */

void print_number(int n)
{
	int d;

	if (n < 0)
	{
		putchar('-');
		n = -n;

	}

	d = 1;

	while (n / d >= 10)
	{
		d *= 10;
	}

	while (d > 0)
	{
		putchar((n / d) % 10 + '0');
		d /= 10;
	}

}
