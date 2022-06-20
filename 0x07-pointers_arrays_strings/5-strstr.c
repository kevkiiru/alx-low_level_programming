#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: a pointer if true, a NULL if false
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
