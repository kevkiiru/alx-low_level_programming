#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name being printed
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
