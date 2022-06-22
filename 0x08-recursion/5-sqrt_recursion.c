#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of
 * a number
 * @n: main integer
 *
 * Return: 0 always
 */

int real_sqrt_recursion(int n, int a);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - recursing to find the natural square root
 * @a; integer one
 * Return: the real square root
 */

int real_sqrt_recursion(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}

	if (a * a == n)
	{
		return (a);
	}

	return (real_sqrt_recursion(n, a + 1));
}
