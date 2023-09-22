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
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");

			if (j % 2)
				printf(" ");
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = *(b + i + j);

				if (c < 32 || c > 126)
					c = '.';
				printf("%c", c);
			}
		}

		printf("\n");
	}
}
