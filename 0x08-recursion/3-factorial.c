#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: main integer
 *
 * Return: 0 always
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1) + (n - 2));
}
