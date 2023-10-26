#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed.
 *
 * Description: This function recursively converts an unsigned long integer
 * into its binary representation and prints it to the standard output.
 * It prints the binary digits from left to right, starting with the most
 * significant bit.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) ? '1' : '0');
}
