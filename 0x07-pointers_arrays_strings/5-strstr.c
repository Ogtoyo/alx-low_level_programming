#include "main.h"
#include <stdio.h>

/**
 *_strstr - a function that locates a substring
 *
 * @haystack: pointer to the string
 * @needle: string containing char to be considered
 * Return: always sucess
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && needle[j] == haystack[i + j]; j++)
		{
			;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}

	}

	return (NULL);
}