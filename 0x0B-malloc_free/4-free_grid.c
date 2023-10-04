#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - a function that creates a 2D array of integers
 * @grid: ptr of grid
 * @height: height of the grid
 * Return: pointer to the grid
*/

void free_grid(int **grid, int height)
{
    int i;

    if (grid != NULL)
    {
        for (i = 0; i < height; i++)
        {
            if (grid[i] != NULL)
            {
                free(grid[i]);
                grid[i] = NULL;
            }
        }

        free(grid);
    }

    return;
}