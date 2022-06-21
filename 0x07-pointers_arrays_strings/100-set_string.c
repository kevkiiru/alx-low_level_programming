#include <stdio.h>
#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: main character
 * @to: second character
 * Return: 0 always
 */

void set_string(char **s, char *to)
{
	*s = to;
}
