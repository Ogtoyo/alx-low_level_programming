#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - a function that draws a diagonal line on the terminal.
 *@n: print char
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}

			putchar('\\');
			putchar(10);

		}

	} else
		putchar(10);
}
