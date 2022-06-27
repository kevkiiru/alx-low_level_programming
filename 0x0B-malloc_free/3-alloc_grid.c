#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: first array
 * @height: second array
 * Return: pointer if true and NULL/negative on failure
 */

int **alloc_grid(int width, int height)
{
	int arr[2][2] = "0, 0, 0, 0";
	int a, b;
	
	for (a = 0; a < width; a++)
	{
		for (b = 0; b < height; b++)
		{
			return (arr);
		}
	return (arr);
	}
	if (width == 0 && height == 0)
		return (NULL);
}
