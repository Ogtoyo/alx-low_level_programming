#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to a string of 0s and 1s.
 *
 * Return: The decimal value of the binary number, 0 if an error occurs
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (b == NULL)
	{
		return (0);
	}

	num = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		num = (num << 1) | (*b - '0');
		b++;
	}

	return (num);
}
