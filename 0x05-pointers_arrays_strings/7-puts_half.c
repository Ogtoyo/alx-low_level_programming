#include "main.h"
#include <stdio.h>

/**
 *puts_half -  a function that prints half of a string.
 *
 *@str: pointer to string
 *Return: void
 */

void puts_half(char *str)
{
	int i, x, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	if (i % 2 == 0)
		x = (i / 2);
	else
		x = ((i - 1) / 2);

	for (n = x; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar(10);


}
