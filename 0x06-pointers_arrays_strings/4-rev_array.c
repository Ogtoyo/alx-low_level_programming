#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @n: no of element to reverse
 * @a: arrays
 *
 */

void reverse_array(int *a, int n)
{
	int i, path;

	for (i = 0; i < n--; i++)
	{
		path = a[i];
		a[i] = a[n];
		a[n] = path;
	}
}
