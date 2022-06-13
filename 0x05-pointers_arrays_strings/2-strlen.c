# include<stdio.h>
# include "main.h"

/**
 * _strlen - main entry point
 * @s: main integer
 * Return: 0 always
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
