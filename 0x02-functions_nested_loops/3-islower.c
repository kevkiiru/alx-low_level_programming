#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c:- the character to be checked
 * Return: Always 0 (success)
*/

int _islower(int c)
{
	char ch;

	ch = 'c';

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
	putchar(ch);
}
