#!/usr/bin/python3
"""Defines an island perimeter"""


def island_perimeter(grid):
    """Return perimeter of the island described in grid.
    0 represents a water zone, 1 represents a land zone
    Args:
	grid (lists): A list of integers.
    Returns:
	Perimeter of the island described in grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
	for w in range(width):
	    if grid[i][w] == 1:
		size += 1
		if (w > 0 and grid[i][w - 1] == 1):
		    edges += 1
		if (i > 0 and grid[i - 1][w] == 1):
		    edges += 1
    return size * 4 - edges * 2
