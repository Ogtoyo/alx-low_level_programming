#include "main.h"
#include <stdio.h>

/**
 *print_number - a function that prints an integer
 *@n: print int
 */

void print_number(int n)
{
	unsigned int d;

	if (n < 0)
	{
		putchar('-');
		n = -n;

	} else
	{
		d = n;
	}

	if (d / 10)
	{
		print_number(d / 10);
	}

	putchar((d % 10) + '0');
}
