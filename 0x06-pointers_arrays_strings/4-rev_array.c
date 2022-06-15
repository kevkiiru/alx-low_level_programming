# include<stdio.h>
# include "main.h"

/**
 * reverse_array - main entry point
 * @a: character one
 * @n: character two
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int k, temp;

	for (k = 0; k < n / 2; k++)
	{
		temp = *a[k];
		*a[k] = *a[n - 1 - k];
		*a[n - 1 - k] = temp;
	}

	return (0);
}
