#include "main.h"
#include <stdio.h>

/**
 *rot13 - a function that encodes a string using rot13
 *@s: string
 *Return: modifing the string
 */

char *rot13(char *s)
{
	int i, j;
	char s_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
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
