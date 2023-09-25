#include "main.h"
#include <stdio.h>

/**
 *_strspn - a function that gets the length of a prefix substring.
 *
 * @s: pointer to the string
 * @accept: string containing char to be considered
 * Return: pointer to the memory
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			break;
		}
	}

	return (i);
}
