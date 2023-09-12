#include "main.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;

			if (y == 0)
			{
				putchar(z + '0');
			} else if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');

			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z + '0');
			}
		}
	}
}

