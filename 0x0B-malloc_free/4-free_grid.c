#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free memory allocated to a previoiusly created 2D array
 * @grid: The 2D array to free memory from
 * @height: The height of the 2D array
 *
 * Return: void
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
