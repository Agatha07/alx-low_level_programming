#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a
 *             2 dimensional array of integers.
 * @width:  Width of the grid
 * @height: Height of the grid
 *
 * Return: If width or height is 0 or negative, return NULL
 *         and on failure return NULL.
 */


int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);
		if (grid[w] == NULL)
		{
			for (w--; w >= 0; w--)
				free(grid[w]);
			free(grid);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)

		for (h = 0; h < width; h++)
			grid[w][h] = 0;
	return (grid);
}
