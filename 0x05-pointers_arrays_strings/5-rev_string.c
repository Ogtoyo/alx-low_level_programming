#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: pointer to string
 *
 */

void rev_string(char *s)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar(10);

	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar(10);
}
