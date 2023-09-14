#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for alphabetic character in uppercase
 *
 * @c: character check
 *
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
