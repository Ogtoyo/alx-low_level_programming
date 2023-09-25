#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_diagsums - a function that prints sum of two diagonals of matrix
 *
 * @a: no of rows
 * @size: size of matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int sumMajor, sumMinor, i;

	sumMajor = 0;
	sumMinor = 0;

	for (i = 0; i < size; i++)
	{
		sumMajor += a[i * size + i];
		sumMinor += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", sumMajor);
	printf("%d\n", sumMinor);
}
