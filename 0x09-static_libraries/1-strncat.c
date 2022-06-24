# include<stdio.h>
# include "main.h"

/**
 * _strncat - main entry point
 * @dest: character one
 * @src: character two
 * @n: character three
 * Return: 0 always
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
