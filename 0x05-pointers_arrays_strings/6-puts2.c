#include "main.h"
#include <stdio.h>

/**
 *puts2 - a function that prints every other character of a string
 *
 *@str: pointer to string
 *Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
