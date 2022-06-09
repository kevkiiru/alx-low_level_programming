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
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n', i);
	}
}
