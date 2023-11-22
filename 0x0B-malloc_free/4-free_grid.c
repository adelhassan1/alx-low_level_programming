#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the allocating function.
 * @grid: the 2 dimentional array.
 * @height: the height.
 * Return: NO return.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
