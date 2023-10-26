#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to retrieve (0 for the least significant bit).
 *
 * Return: The value of the bit at the specified index, or -1 if the index
 *         is out of the valid range for the given number.
 *
 * Description: This function checks if the specified index is within the valid
 * range for the number and extracts the value of the bit at that index.
 * The least significant bit is at index 0, and the most significant bit is at
 * index (sizeof(n) * CHAR_BIT - 1).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * CHAR_BIT)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
