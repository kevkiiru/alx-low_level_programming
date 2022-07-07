#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all it's parameters
 * @n: the main integer
 *
 * Return: 0 if n is null otherwise correct arithmetics
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
		sum = sum + va_arg(list, int);

	va_end(list);

	return (sum);
}
