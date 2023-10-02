#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string
 * @src: from source
 * @dest: to destination buffer
 * Return: Pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
