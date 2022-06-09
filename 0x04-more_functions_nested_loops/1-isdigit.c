# include<stdio.h>
# include "main.h"

/**
 * _isdigit - entry point
 * @c: character checker
 * Return: 1 if c and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
