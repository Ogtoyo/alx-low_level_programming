#include "main.h"
#include <stdio.h>

/**
 *print_rev - a function that prints a string in reverse
 *
 *@s: pointer charater to print
 *
 */

void print_rev(char *s)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++);

	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');

}
