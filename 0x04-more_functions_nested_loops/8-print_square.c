# include<stdio.h>
# include "main.h"

/**
 * print_square - entry point
 * @size - main integer
 * Return: 0 always
 */

void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
