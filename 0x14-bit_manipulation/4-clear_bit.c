#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the number in which to clear the bit.
 * @index: index of the bit to clear to 0 (0 for the least significant bit).
 *
 * Return: 1 if the operation is successful, or -1 if the index is out of
 *         the valid range for the given number.
 *
 * Description: This function checks if the specified index is within the valid
 * range for the number and clears the bit at that index to 0 using a bitwise
 * operation.
 * The least significant bit is at index 0, and the most significant bit is at
 * index (sizeof(*n) * CHAR_BIT - 1).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * CHAR_BIT)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
