#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The start of the range of values to include in the array
 * @max: The end of the range of values to include in the array
 *
 * Return: A pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
