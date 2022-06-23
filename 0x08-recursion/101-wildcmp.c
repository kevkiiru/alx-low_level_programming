#include <stdio.h>
#include "main.h"

int check_recurs(char *s1, char *s2);
int *move(char *s2);

/**
 * wildcmp - function that compares two strings and returns 1 if the
 * strings can be considered identical
 * @s1: character one
 * @s2: character two
 * Return: 1 if identical and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	int sum = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s2 == '*')
	{
		s2 = move(s2);
		if (*s2 == '\0')
			return (1);
		if (*s2 == *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += check_recurs(s1 + 1, s2);
		return (!!sum);
	}
}

/**
 * check_recurs - checks the recursive string
 * @s1: character one
 * @s2: character two
 *
 * Return: 0 always
 */

int check_recurs(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (check_recurs(s1 + 1, s2));
}

/**
 * *move - moves the character
 * @s2: character one
 *
 * Return: 0 always
 */

char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1));
	else
		return (s2);
}
