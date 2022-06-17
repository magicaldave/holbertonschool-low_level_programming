#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **newgrid;
	int x, y;

	newgrid = malloc(((width + 1) * height) * sizeof(int));
	for (x = 0 ; x < width ; x++)
	{
		for (y = 0 ; y < height; y++)
		{
			newgrid[x][y] = 0;
		}
	}
	return (newgrid);
}
