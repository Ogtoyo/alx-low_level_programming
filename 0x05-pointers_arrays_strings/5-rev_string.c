#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: pointer to string
 *
 */

void rev_string(char *s)
{
	int i, x;
	char path;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	i = i - 1;

	for (x = 0; x < i; x++)
	{
		path = s[x];
		s[x] = s[i];
		s[i] = path;
		i--;
	}

}
