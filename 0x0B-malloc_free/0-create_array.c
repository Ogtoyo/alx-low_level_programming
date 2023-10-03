#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it
 * @size: size of the memory
 * @c: char provided
 * Return: sucess
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;

		}

		return (ptr);
	}
	return (NULL);

}
