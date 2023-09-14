#include "main.h"
#include <stdio.h>

/**
 *print_line - a function that draws a straight line in the terminal
 *@n: print char
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		putchar(10);

	else
	{
		for (i = 0; i <= n; i++)
		{
			putchar('_');
		}

		putchar(10);
	}
		
}
