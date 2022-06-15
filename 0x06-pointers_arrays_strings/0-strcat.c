# include<stdio.h>
# include "main.h"

/**
 * _strcat - main entry point
 * @dest: character one
 * @src: character two
 * Return: 0 always
 */

char *_strcat(char *dest, char *src)
{
	dest = "Hello";
	src = "World";

	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
