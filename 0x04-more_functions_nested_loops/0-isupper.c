# include<stdio.h>
# include "main.h"

/**
 * _isupper - entry point
 * @c: checking character
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	int c;

	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
