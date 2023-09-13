#include "main.h"
#include <stdio.h>

/**
 * print_times_table - a function that prints the n times table
 * @n: char entered
 * Return: Always 0
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (x = 0; x <= n; i++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;

			if (y == 0)
			{
				_putchar(z + '0');

			} else
			{
				_putchar(',');
				_putchar(' ');

				if (z < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				} else if (z >= 10)
				{
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				} else if (z >= 100)
					printf("%d", z);
			}
		}

		_putchar(10);
	}
}


