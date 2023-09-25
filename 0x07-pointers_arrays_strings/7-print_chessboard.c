#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_chessboard - a function that prints the chessboard.
 *
 * @a: no of rows
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}

		putchar(10);
	}
}
