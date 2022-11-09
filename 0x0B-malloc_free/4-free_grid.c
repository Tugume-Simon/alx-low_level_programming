#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory referenced by an integer
 * double pointer grid
 * @grid: double pointer
 * @height: size of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
