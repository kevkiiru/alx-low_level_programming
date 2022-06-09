#include <stdio.h>
#include "main.h"

/**
 * print_numbers - entry point
 *
 * Return: 0 always
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
