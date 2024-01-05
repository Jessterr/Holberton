#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees memory alloc for a grid array
 * @grid: tells function which array to input
 * @height: input
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
