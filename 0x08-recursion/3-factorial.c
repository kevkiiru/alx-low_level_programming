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
	factorial[0] = 1;

	if (n < 0)
	{
		return (-1);
	}

	factorial = factorial * 1;
	return (factorial);
}
