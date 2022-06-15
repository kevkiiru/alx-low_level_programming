# include<stdio.h>
# include "main.h"

/**
 * leet - main entry point
 * @s: main integer
 * Return: 0 always
 */

char *leet(char *s)
{
	int k, l;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (s[k] == a[l])
			{
				s[k] = b[l];
			}
		}
	}

	return (s);
}
