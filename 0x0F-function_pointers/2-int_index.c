#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer
 * @array: a pointer to an integer array
 * @size: the size of the array
 * @cmp: function that compares integers and returns an integer
 *Return: Always 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
	}

	return (-1);
}
