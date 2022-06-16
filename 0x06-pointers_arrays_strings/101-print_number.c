# include<stdio.h>
# include "main.h"

/**
 * print_number - main entry point
 * @n: main integer
 * Return: 0 always
 */

void print_number(int n)
{
	unsigned int n1;
	
	n = 0;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}