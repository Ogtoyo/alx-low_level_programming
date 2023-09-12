#include "main.h"
#include <stdio.h>

/**
 * print_sign - a function that prints the sign of a number.
 *
 * @n: print dign
 *
 * Return: 1, 0 and -1
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n <= -1)
	{
		_putchar('-');
	}
		return (-1);
}
