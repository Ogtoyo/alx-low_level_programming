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
	size_t total = strlen(s1) + strlen(s2) + 1;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	ptr_str = (char *)malloc(total);

	if (ptr_str != NULL)
	{
		strcpy(ptr_str, s1);
		strcat(ptr_str, s2);

		return (ptr_str);
		free(ptr_str);
	}

	return (NULL);

}
