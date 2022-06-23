#include <stdio.h>
#include "main.h"

int check_palin(char *s, int a, int leng);
int str_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome and 0 if not
 * @s: main character
 *
 * Return: 1 if true and 0 if false
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palin(s, 0, str_recursion(s)));
}

/**
 * str_recursion - returns the length of a string
 * @s: character in use
 *
 * Return: length of string
 */

int str_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_recursion(s + 1));
}

/**
 * check_palin - checking the character recursively
 * @a: integer one
 * @s: main character
 * @leng: the length of the string
 * Return: the length of the string
 */

int check_palin(char *s, int a, int leng)
{
	if (*(s + a) != *(s + leng - 1))
		return (0);

	if (a >= leng)
		return (1);

	return (check_palin(s, a + 1, leng - 1));
}
