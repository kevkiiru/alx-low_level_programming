# include<stdio.h>
# include "main.h"

/**
 * print_triangle - entry point
 * @size: main integer
 * Return: 0 always
 */

void print_triangle(int size)
{
	if (size <= 10)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a <= size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
