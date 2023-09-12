#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - printing alphabets in lowercase
 *
 * Return: Always 0 (sucess)
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar(10);
}
