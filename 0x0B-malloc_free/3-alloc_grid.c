#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D array (grid), or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int x, y;

    if (width <= 0 || height <= 0)
	return (NULL);

    grid = malloc(sizeof(int *) * height);

    if (grid == NULL)
	return (NULL);

    for (x = 0; x < height; x++)
    {
	grid[x] = malloc(sizeof(int) * width);
	if (grid[x] == NULL)
	{
		for (y = 0; y < x; y++)
		free(grid[y]);

		free(grid);
		return (NULL);
	}
    }

    for (x = 0; x < height; x++)
    {
	for (y = 0; y < width; y++)
	{
		grid[x][y] = 0;
	}
    }

    return (grid);
}
