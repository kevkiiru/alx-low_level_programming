#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the main string
 * @c: character being checked
 * Return: 0 always
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s-1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
