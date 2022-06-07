# include <stdio.h>
# include "main.h"

/**
 * _isalpha- entry point
 *@c: checking character
 * Return: 1 if true and 0 if false
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
