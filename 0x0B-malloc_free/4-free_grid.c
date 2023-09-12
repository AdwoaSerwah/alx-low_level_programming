#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid of integers.
 * @grid: The pointer to the grid to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}

