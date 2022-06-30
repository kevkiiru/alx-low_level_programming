#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: main character
 * @s2: second character
 * @n: main integer
 * Return: pointer if true and null terminated and NULL if false
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, leng1, leng2;

	a = 0;
	b = 0;
	leng1 = 0;
	leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	if (n < leng2)
		str = malloc(sizeof(char) * (leng1 + n + 1));
	else
		str = malloc(sizeof(char) * (leng1 + leng2 + 1));

	if (!str)
		return (NULL);

	while (a < leng1)
	{
		str[a] = s1[a];
		a++;
	}

	while (n < leng2 && a < (leng1 + n))
		str[a++] = s2[b++];

	while (n >= leng2 && a < (leng1 + leng2))
		str[a++] = s2[b++];

	str[a] = '\0';

	return (str);
}
