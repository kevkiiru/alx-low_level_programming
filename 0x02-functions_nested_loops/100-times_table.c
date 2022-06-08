#include <stdio.h>
#include "main.h"

/**
 * print_times_table - main entry point
 * @x: checking character
 * Return: Always 0
 */

void print_times_table(int x)
{
	int a, b, c;

	if (x >= 0 && x <= 15)
	{
		for (a = 0; a <= x; a++)
		{
			for (b = 0; b <= x; b++)
			{
				c = b * a;
				if (b == 0)
				{
					_putchar(c + '0');
				}
				else if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 100) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
