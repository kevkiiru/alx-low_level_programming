# include<stdio.h>
# include "main.h"

/**
 * print_rev - main entry point
 * @s: string to be printed
 * Return: 0 always
 */

void print_rev(char *s)
{
	int a, b, hello;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	hello = a;

	for (b = hello - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
