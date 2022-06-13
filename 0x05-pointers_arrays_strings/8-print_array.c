# include<stdio.h>
# include "main.h"

/**
 * print_array - main entry point
 * @a: integer one
 * @n: integer two
 * Return: 0 always
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k == 0)
			printf("%d", a[k]);
		else
			printf(", %d", a[k]);
	}
	printf("\n");
}
