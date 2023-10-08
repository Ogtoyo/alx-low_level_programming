#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		perror("Error");
		exit(98);
	}

	return (p);
}
