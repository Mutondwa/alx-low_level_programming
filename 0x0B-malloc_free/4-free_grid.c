#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: 2D grid
 * @height: height dimension of grid
 *
 * Description: frees the memory of the grid
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
	return;

    for (i = 0; i < height; i++)
    {
	free(grid[i]);
	grid[i] = NULL;
    }
    free(grid);
}
