#include <stdio.h>
#include "main.h"

/**
 * _memcpy - main entry point
 * @dest: destination of the memory bytes
 * @src: source of the memory bytes
 * @n: another character
 * Return: 0 always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

