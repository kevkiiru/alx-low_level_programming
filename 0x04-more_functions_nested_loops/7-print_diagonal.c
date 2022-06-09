# include<stdio.h>
# include "main.h"

/**
 * print_diagonal - entry point
 * @n: character in use
 * Return: 0 always
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 0; a <= n; a++)
		{
			_putchar(' \');
		}
		_putchar('\n');
	}
}
