#include "main.h"
#include <stdio.h>

/**
 *print_line - a function that draws a straight line in the terminal
 *@n: print char
 */

void print_line(int n)
{
	if (n <= 0)
		putchar(10);

	else
		putchar('_');
}
