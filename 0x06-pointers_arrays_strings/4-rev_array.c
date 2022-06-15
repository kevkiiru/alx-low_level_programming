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
	int k, l, temp;

	l = n - 1;

	for (k = 0; k < n / 2; k++)
	{
		temp = a[k];
		a[k] = a[l];
		a[l--] = temp;
	}
}
