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

	for (a = 0; dest[a] != '\0'; a++)
	{
		src[a] = dest[a];
	}

	src[a] = '\0';

	return (dest);
}
