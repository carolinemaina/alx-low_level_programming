#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width given
 * @height: height given
 * Return: NULL on failure or width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **gr;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	gr = malloc(sizeof(int *) * height);
	if (gr == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		gr[h] = malloc(sizeof(int) * width);
		if (gr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(gr[h]);
			free(gr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			gr[h][w] = 0;
	}
	return (gr);
}
