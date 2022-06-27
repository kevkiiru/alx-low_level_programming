#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to a new allocated space in memory, NULL if false
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int a, b, leng 1, leng 2;

	a = 0;
	b = 0;
	leng1 = 0;
	leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	str = malloc(sizeof(char) * (leng1 + leng2 + 1));

	if (str == NULL)
		return (NULL);

	if (s1)
	{
		while (a < leng1)
		{
			str[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (leng1 + leng2))
		{
			str[a] = s2[b];
			a++;
			b++;
		}
	}

	str[a] = '\0';

	return (str);
}
