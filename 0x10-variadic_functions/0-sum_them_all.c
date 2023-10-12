#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The variable number of integers to add.
 *
 * Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	unsigned int i;
	unsigned int result;

	result = 0;

	va_start(sum_list, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(sum_list, unsigned int);
	}
	va_end(sum_list);

	return (result);

}
