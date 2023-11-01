#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free memory allocated for a 2D grid.
 *
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
