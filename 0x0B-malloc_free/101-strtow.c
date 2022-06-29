#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int count_word(char *s);

/**
 * count_word - assists to count the words
 * @s: main character
 * Return: 0 always
 */

int count_word(char *s)
{
	int count, a, b;

	count = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			b++;
		}
	}

	return (b);
}

/**
 * strtow - function that splits a string into two words
 * @str: main character
 * Return: pointer to an array of strings if true or NULL if false
 */

char **strtow(char *str)
{
	char **splitter, *tmp;
	int a, b, leng, words, c, start, end;

	while (*(str + leng))
		leng++;

	words = count_word(str);
	if (words == 0)
		return (NULL);

	splitter = (char **) malloc(sizeof(char *) * (words + 1));
	if (splitter == NULL)
		return (NULL);

	for (a = 0; a <= leng; a++)
	{
		if ((str)[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = 1;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp = str[start++];
				*tmp = '\0';
				splitter[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	splitter[b] = NULL;

	return (splitter);
}
