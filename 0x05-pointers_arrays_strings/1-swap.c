#include "main.h"
#include <stdio.h>

/**
 *swap_int - a function that swaps the values of two integers
 *
 *@a: pointer charater to int
 *@b: pointer character to int
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
