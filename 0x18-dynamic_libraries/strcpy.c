# include<stdio.h>
# include "main.h"

/**
 * _strcpy - main entry point
 * @dest: integer one
 * @src: integer two
 * Return: 0 always
 */

char *_strcpy(char *dest, char *src)
{
	int leng, a;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (a = 0; a < leng; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
