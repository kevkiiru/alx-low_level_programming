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
	char ch;
	int front, back;

	if (front >= back)
	{
		return;
	}

	ch = *(s + front);
	*(s + front) = *(s + back);
	*(s + back) = ch;
	_print_rev_recursion(s, ++front, --back);
}
