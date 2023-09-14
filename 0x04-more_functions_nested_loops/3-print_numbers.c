#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints the numbers
 *
 * Return: Always 0 (sucess)
*/

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}

	_putchar(10);
}
