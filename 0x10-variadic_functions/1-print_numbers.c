#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print a list of numbers with a specified separator.
 * @separator: The string used to separate the numbers.
 * @n: The number of integers to print.
 * @...: A variable number of integer arguments to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, number;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(args, unsigned int);
		printf("%d", number);

		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
