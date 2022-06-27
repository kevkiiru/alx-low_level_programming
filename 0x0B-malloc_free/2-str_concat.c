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
	char *str, *str2;
	int a, b;

	a = 0;
	b = 0;

	while (s1[a] != '\0')
	{
		str++;
		a++;
	}

	while (s2[b] != '\0')
	{
		*str = *str2;
		str++;
		str2++;
		b++;
	}

	if (s1[a] != s2[b])
		return (NULL);

	return (str);
}
