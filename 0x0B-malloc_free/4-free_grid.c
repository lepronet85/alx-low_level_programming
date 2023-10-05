#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: Pointer to the 2D grid
 * @height: Height of the grid
 * Description: This function frees the memory allocate for a 2D grid
 * Return: Nothing (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

