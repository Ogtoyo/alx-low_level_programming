#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: sucess
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr_str;
	size_t len1 = s1 ? strlen(s1) : 0;
	size_t len2 = s2 ? strlen(s2) : 0;
	size_t total = len1 + len2 + 1;

	ptr_str = (char *)malloc(total);

	if (ptr_str != NULL)
	{
		if (s1)
			strcpy(ptr_str, s1);
		if (s2)
			strcat(ptr_str, s2);

		return (ptr_str);
		free(ptr_str);
	}

	return (NULL);

}
