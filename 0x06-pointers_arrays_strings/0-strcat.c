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

	int leng;
	int a;

	for (a = 0; src[a] != '\0'; ++a; ++leng)
	{
		dest[leng] = src[a];
	}

	dest[leng] = '\0';

	_putchar(dest);
}
