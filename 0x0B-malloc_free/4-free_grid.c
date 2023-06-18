#include "main.h"

/**
 * free_grid - free the 2d array memory allocation
 * @grid: 2d array.
 * @height: rows of the 2d array.
 *
 */

void free_grid(int **grid, int height)
{
	int i;
	/* free allocated memory */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
