#include "main.h"
#include <stdlib.h>
/**
 * free_grid - that frees a 2 dimensional grid
 * @grid: two dimentional array grid
 * @height: Height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
