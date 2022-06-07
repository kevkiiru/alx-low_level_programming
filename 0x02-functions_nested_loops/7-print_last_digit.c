# include <stdio.h>
# include "main.h"

/**
 * print_last_digit - entry point
 * @n: the character
 * int: the variable
 * Return: 0 success
*/

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
