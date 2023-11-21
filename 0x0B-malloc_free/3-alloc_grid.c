#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocating memory to a 2 dimentional array.
 * @width: the rows.
 * @height: the columns.
 * Return: the array.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		grid[hgt_index] = malloc(sizeof(int) * width);

		if (grid[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(grid[hgt_index]);

			free(grid);
			return (NULL);
		}

	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			grid[hgt_index][wid_index] = 0;
	}

	return (grid);

}
