# include <stdio.h>
# include "main.h"

/**
 * print_sign - entry point
 * @n: checking character
 * Return: 1 if true and prints + if greater than zero
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
