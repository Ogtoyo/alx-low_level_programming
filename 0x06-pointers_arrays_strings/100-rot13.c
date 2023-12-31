#include "main.h"
#include <stdio.h>

/**
 *rot13 - a function that encodes a string using rot13
 *@s: string
 *Return: modifing the string
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
		{
			s[i] += 13;
		} else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] -= 13;
		}
	}

	return (s);
}
