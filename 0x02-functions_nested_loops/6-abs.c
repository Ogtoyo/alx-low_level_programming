#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - a function that computes the absolute value of an integer
 *
 *@i: to print absolute
 *Return: absolute value
 */

int _abs(int i)
{

	if (i < 0)
	{
		return (-i);
	}

	return (i);
}
