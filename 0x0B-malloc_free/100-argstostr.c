#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concantenates all the arguments
 * @ac: main integer
 * @av: character double pointer
 * Return: pointer to a new string if true and NULL if false
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, leng;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			leng++;
		leng++;
	}

	str = malloc(sizeof(char) * (leng + 1));

	if (str == NULL)
		return (NULL);

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}

	return (str);
}
