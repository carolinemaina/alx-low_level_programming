#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: the grid created
 * @height: height of the grid
 * Return: 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++);
	{
		free(grid[a]);
	}
	free(grid);
}
