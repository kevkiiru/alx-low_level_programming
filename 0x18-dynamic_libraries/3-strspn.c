#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a string
 * @s: main string
 * @accept: where the string is stored
 * Return: 0 always
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, chec;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		chec = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				chec = 1;
			}
		}
		if (chec == 0)
		{
			return (c);
		}
	}

	return (0);
}
