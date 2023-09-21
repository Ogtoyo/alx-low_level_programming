#include "main.h"
#include <stdio.h>

/**
 *leet - a function that encodes a string into 1337.
 *@s: string
 *Return: modifing the string
 */

char *leet(char *s)
{
	int i, j;
	char s_1[] = "AaEeOoTtLl";
	char s_2[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s_1[j]; j++)
		{
			if (s[i] == s_1[j])
			{
				s[i] = s_2[j];
			}
		}
	}

	return (s);
}
