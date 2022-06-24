#include <stdio.h>
#include "main.h"

/**
 * _memset - main entry
 * @s: character one
 * @b: character two
 * @n: character three
 * Return: 0 always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
