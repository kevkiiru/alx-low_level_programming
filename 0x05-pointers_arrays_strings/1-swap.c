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
	a = 2;
	*b = &a;

	return (0);
}
