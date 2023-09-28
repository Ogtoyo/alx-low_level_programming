#include "main.h"
#include <stdio.h>

/**
 *strlen-recursion - function that returns the length of a string
 *
 *@s: pointer of string
 *Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1) + _strlen_recursion(s + 1);
	}

	return (0);

}
