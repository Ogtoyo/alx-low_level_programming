#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that concatenates two strings.
 * @src: from source
 * @dest: to destination buffer
 * @n: num of string
 * Return: Pointer to the destination buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{

		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
