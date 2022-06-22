#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: main character
 *
 * Return: 0 always
 */

void _print_rev_recursion(char *s)
{
	char str[];
	int a, b, leng;

	b = leng - a;

	*s = str[a];
	str[a] = str[b];
	str[b] = *s;

	if (a == leng / 2)
		return;

	_putchar(*s);
	_print_rev_recursion(str, a + 1, leng);
}
