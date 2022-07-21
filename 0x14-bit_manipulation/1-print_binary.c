#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a
 * number
 * @n: the main integer
 * Return: the output
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = n >> a;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
