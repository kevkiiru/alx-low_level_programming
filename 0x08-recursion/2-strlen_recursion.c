#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: main character
 *
 * Return: 0 always
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}

	_putchar(*s);
	_strlen_recursion(s + 1);
}
