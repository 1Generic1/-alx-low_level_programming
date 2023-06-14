#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: A pointer to the 2D array to be freed
 * @height: height of the 2D array.
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{

	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
