#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 *
 * This function checks whether the system is little-endian or big-endian.
 *
 * Return: 1 if the system is little-endian, 0 if it's big-endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endianess_check = (char *)&num;

	if (*endianess_check == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
