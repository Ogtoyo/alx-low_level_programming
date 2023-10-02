#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * @src: source string
 * @dest: to destination string
 * @n: no of character
 * Return: Pointer to the destination buffer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
		;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
