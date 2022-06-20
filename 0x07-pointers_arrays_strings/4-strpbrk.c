#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for set of bytes
 * @s: main string
 * @accept: another string
 * Return: a pointer to the byte s
 */

char *_strpbrk(char *s, char accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
