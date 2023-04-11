#include "main.h"
#include <stdlib.h>
/**
 * free_grid - to free 2D grid
 * @grid: 2D grid
 * @height: height of the 2D grid
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
