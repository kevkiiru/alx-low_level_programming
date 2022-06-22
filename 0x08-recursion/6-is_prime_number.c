#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0;
 * @n: main integer
 *
 * Return: 0 always
 */

int is_prime_number(int n)
{
	if (n / 1 == 0 && n % n == 0)
	{
		return (1);
	}
	else
	{
		return (0);
		is_prime_number(n, n - 1);
}
