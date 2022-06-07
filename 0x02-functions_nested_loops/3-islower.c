#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c:- the character to be checked
 * Return: Always 0 (success)
*/

int _islower(int c)
{
	return (c => 'a' && c <= 'z');
}
