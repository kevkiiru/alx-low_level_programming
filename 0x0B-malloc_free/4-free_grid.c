#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2d arrary
 * @grid: the array being freed
 * @height: an integer in the array
 * Return: the freed grid
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
