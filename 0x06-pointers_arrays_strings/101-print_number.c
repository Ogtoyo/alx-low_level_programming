#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *print_number - a function that prints an integer
 *@n: intergers
 *Return: Always return 0.
 */

void print_number(int n)
{
	unsigned int i;
	int num, path;

	i = (n < 0) ? -n : n;

	if (n < 0)
		_putchar('-');

	if (i == 0)
        _putchar('0');
		
	num = 1;
	path = i;

	while (path > 9)
	{
		path /= 10;
		num *= 10;
	}

	while (num > 0)
	{
		_putchar((i / num) + '0');
		i %= num;
		num /= 10;
	}
}
