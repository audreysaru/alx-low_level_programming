#include "main.h"

/**
 * free_grid - free space previously allocated
 * @grid: pointer to array
 * @height: no of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
