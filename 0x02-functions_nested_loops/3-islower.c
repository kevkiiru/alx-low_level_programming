#include "main.h"

/**
 * _islower - Entry point
 * @c:- the character to be checked
 * Return: 1 if true and 0 if false
*/

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
