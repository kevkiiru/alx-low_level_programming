#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: main character
 *
 * Return: 1 if true and 0 if false
 */

int is_palindrome(char *s)
{
	int a, reverse, remainder, original;

	reverse = 0;
	original = a;

	while (a != 0)
	{
		remainder = a % 10;
		reverse = reverse * 10 + remainder;
		a /= 10;
	}

	if (original == reverse)
		_putchar(original);
	else
		_putchar(original);
}
