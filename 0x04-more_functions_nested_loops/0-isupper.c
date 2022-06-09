#include <stdio.h>
#include "main.h"

/**
 * _isupper - entry point
 * @c: checks the character
 * Return: 1 if upper and 0 if otherwise
 */

int _isupper(int c)
{
	char ch;
	int c = 'a';

	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
