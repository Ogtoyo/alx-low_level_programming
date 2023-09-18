#include "main.h"
#include <stdio.h>

/**
 *_strlen - function that returns the length of a string
 *
 *@s: pointer charater
 *Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(i);
	}

	return (0);
}
