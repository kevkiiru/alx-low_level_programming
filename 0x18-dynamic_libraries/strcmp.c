# include<stdio.h>
# include "main.h"

/**
 * _strcmp - main entry point
 * @s1: character one
 * @s2: character two
 * Return: 0 always
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
