#include "main.h"
#include "stdlib.h"

/**
 * free_grid - memory cleanup for its sister function
 * @grid: double pointer used for project 3
 * @height: number of arrays in source array
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0 ; x < height; x++)
		free(grid[x]);
	free(grid);
}
