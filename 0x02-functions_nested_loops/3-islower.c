#include "main.h"
#include <stdio.h>

/**
 * _islower -  a function that checks for lowercase character
 *
 * @c: print character
 *
 * Return: 1 if c is lowercase or 0 othrewise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
