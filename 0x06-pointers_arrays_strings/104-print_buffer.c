#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_buffer - a function that prints a buffer
 *@b: pointer to buffer
 *@size: content byte
 *Return: void
*/

void print_buffer(char *b, int size)
{
	int postion, x, i, remain;

	postion = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (postion < size)
	{
		x = size - postion < 10 ? size - postion : 10;
		printf("%08x: ", postion);
		for (i = 0; i < 10; i++)
		{
			if (i < x)
				printf("%02x", *(b + postion + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < x; i++)
		{
			remain = *(b + postion + i);

			if (remain <= 31 || remain >= 133)
			{
				remain = '.';
			}
			printf("%c", remain);
		}
		printf("\n");
		postion += 10;
	}
}
