#include "main.h"

/**
 * flip_bits - Counts the no of bits needed to flip to convert one number
 * to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped to convert n to m.
 *
 * Description:calculates the number of bits that differ between two
 * integers n and m.performs a bitwise XOR operation to identify the
 * differing bits
 * and counts them using a loop. The result represents the number of bit
 * flips needed
 * to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
