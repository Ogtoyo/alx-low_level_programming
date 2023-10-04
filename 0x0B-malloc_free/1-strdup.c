#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to allocated memory which contain a the string
 * @str: pointer to string
 * Return: sucess
*/

char *_strdup(char *str)
{
	char *ptr_str;
	int i;

	if (strlen(str) == 0)
		return (NULL);

	ptr_str = (char *)malloc(strlen(str) + 1);

	if (ptr_str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr_str[i] = str[i];
		}

		return (ptr_str);
		free(ptr_str);
	}

	return (NULL);
}
