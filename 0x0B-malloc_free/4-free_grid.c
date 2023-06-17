#include "main.h"
/**
 * free_grid - this function frees a 2d array.
 *
 * @grid: is a 2d array.
 *
 * @height: is int
 */
void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
	}
	free(grid);
}
