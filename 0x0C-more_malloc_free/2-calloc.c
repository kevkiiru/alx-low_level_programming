#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * fill_mem - function that fills the memory with a byte
 * @a: main character
 * @b: second character
 * @n: main integer
 * Return: pointer to the memory
 */

char *fill_mem(char *a, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		a[c] = b;
	}

	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: first integer
 * @size: size of the array
 * Return: pointer if true and NULL if false
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(size * nmemb);

	if (str == NULL)
		return (NULL);

	fill_mem(str, 0, nmemb * size);

	return (str);
}
