#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of two diagonals
 * of a square matrix of integers
 * @a: main integer
 * @size: size of the square
 */

void print_diagsums(int *a, int size)
{
	int k;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (k = 0; k < size; k++)
	{
		sum += a[(size * k) + k];
		sum1 += a[(size * (k + 1)) - (k + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
