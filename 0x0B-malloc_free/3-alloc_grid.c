#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2d array of memory
 * @width: width of array
 * @height: height of array
 * Return: double-pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **newgrid;
	int x, y, i;

	newgrid = malloc(height * sizeof(int *));
	for (i = 0 ; i < height ; i++)
		newgrid[i] = malloc(width * sizeof(int));
	for (x = 0 ; x < height ; x++)
	{
		for (y = 0 ; y < width; y++)
		{
			newgrid[x][y] = 0;
		}
	}
	return (newgrid);
}

