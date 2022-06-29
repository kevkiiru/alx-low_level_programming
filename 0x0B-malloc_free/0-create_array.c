#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function entry point
 * @size: size of the array
 * @c: character that returns the function
 * Return: a pointer if true and NULL if false
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b = 0;

	if (size == 0)
	{
		return (NULL);
	}

	a = (char *) malloc(sizeof(char) * size);

	if (a == 0)
	{
		return (0);
	}

	while (b < size)
	{
		*(a + b) = c;
		b++;
	}

	*(a + b) = '\0';

	return (a);
}
