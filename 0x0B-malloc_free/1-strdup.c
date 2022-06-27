#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a new string
 * @str: the pointer
 *
 * Return: a pointer if true and NULL if insufficient
 */

char *_strdup(char *str)
{
	char sec;
	unsigned int a, leng;

	a = 0;
	leng = 0;

	if (str == NULL)
		return (NULL);

	while (str[leng])
		leng++;

	sec = malloc(sizeof(char) * (leng + 1));

	if (sec == NULL)
		return (NULL);

	while ((sec[a] = str[a]) != '\0')
		a++;

	return (sec);
}
