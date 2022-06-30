#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: main integer
 * Return: pointer if true and termination if false
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
