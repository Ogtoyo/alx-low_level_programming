#include "main.h"
#include <stdio.h>

/**
 *print_square - a function that prints a square
 *@size: size of squ
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}

			putchar(10);

		}
	} else
		putchar(10);
}
