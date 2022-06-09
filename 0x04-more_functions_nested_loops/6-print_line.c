# include<stdio.h>
# include "main.h"

/**
 * print_line - entry point
 * @n: character in use
 * Return: 0 always
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b > a)
					_putchar('_');
				else if
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
