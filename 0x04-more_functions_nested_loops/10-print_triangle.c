#include "main.h"
#include <stdio.h>

/**
 *print_triangle - a function that prints a triangle
 *@size: size of tri
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				putchar(' ');
			}

			for (j = 0; j <= i; j++)
			{
				putchar('#');
			}

			putchar(10);

		}

	} else
		putchar(10);
}
