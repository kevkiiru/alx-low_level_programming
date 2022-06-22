#include <stdio.h>
#include "main.h"

int real_prime_number(int n, int a);

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0;
 * @n: main integer
 *
 * Return: 0 always
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (real_prime_number(n, n - 1));
}

/**
 * real_prime_number - finds the real prime number
 * @a: main integer
 * @n: second integer
 *
 * Return: 1 if prime, 0 if not prime
 */

int real_prime_number(int n, int a)
{
	if (a == 1)
		return (1);

	if (n % a == 0 && a > 0)
		return (0);

	return (real_prime_number(n, a - 1));
}
