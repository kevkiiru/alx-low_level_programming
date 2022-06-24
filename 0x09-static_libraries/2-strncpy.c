# include<stdio.h>
# include "main.h"

/**
 * _strncpy - main entry point
 * @dest: character one
 * @src: character two
 * @n: character three
 * Return: 0 always
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
