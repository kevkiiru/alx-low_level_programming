#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: main character used
 *
 * Return: 0 always
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	_puts_recursion(s + 1);

}
