# include<stdio.h>
# include "main.h"

/**
 * string_toupper - main entry point
 * @s: integer one
 * Return: 0 always
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}
	return (s);
}
