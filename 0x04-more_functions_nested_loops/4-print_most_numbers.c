#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -  a function that prints the numbers
 *
 * Return: Always 0 (sucess)
*/

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;

		putchar(num);
	}

	putchar(10);

}
