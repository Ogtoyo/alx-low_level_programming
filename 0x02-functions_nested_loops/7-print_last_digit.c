#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n: character for last digit
 *
 * Return: last digit
 *
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
