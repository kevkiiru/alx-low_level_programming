# include<stdio.h>
# include "main.h"

/**
 * swap_int - main entry point
 * @a: integer one
 * @b: integer two
 * Return: 0 always
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;

	return (0);
}
