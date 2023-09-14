#include "main.h"
#include <stdio.h>

/**
 *more_numbers - a function that prints 10 times the numbers
 */

void more_numbers(void)
{
	char num;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				putchar(num / 10 + '0');
			}
			putchar(num % 10 + '0');
		}

		putchar(10);
	}
}
