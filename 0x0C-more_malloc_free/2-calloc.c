#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: A pointer to the allocated memory, which is initialized to 0. If
 *         nmemb or size is 0, or if the allocation fails, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return NULL;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb * size);

	return (p);
}
