#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - a function that creates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the grid
*/

int **alloc_grid(int width, int height)
{
	int i, j, **ptr_grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr_grid = (int **) malloc(height * sizeof(int *));

	if (ptr_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr_grid[i] = (int *) malloc(width * sizeof(int));

		if (ptr_grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr_grid[i]);

			free(ptr_grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			ptr_grid[i][j] = 0;
	}

	return (ptr_grid);
}
