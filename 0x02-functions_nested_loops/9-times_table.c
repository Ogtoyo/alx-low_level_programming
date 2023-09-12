#include "main.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int mul9;

	for (mul9 = 0; mul9 <= 9; mul9++)
	{
		mul9 *= 9;

		_putchar(mul9 + '0');
		_putchar(',');
		_putcahr('\n');

		_putchar('\n);

	}
}
