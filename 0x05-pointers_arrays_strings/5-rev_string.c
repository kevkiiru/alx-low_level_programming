# include<stdio.h>
# include "main.h"

/**
 * rev_string - main entry point
 * @s: main character
 * Return: 0 always
 */

void rev_string(char *s)
{
	char temp;
	int a, leng1, leng2;

	leng1 = 0;
	leng2 = 0;

	while (s[leng1] != '\0')
	{
		leng1++;
	}

	leng2 = leng1 - 1;

	for (a = 0; a < leng1 / 2; a++)
	{
		temp = s[a];
		s[a] = s[leng2];
		s[leng2--] = temp;
	}
}
