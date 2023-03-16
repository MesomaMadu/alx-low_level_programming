#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2-dimwnsional array of integers
 * @grid: the 2-dimensional array of integers to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[height]);

	free(grid);
}
