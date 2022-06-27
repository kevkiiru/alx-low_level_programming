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
	char str2;

	str = (char *) malloc(sizeof(char));
	str2 = *str;

	if (str == NULL)
	{
		return (NULL);
	}

	return (str2);
}
