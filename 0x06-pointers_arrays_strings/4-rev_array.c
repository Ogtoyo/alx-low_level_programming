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
	int i, j, path;

	j = n - 1;
	for (; j > i; i++)
	{
		path = a[i];
		a[i] = a[j];
		a[j] = path;
		j--;
	}
}
