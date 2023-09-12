#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 * @n: print char.
 */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			} else
				_putchar('\n');

		}

	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i / 100 + '0');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			} else
				_putchar('\n');

		}

	}

}
