#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: main integer
 * @m: second integer
 * Return: the flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = exc >> a;
		if (curr & 1)
			count++;
	}

	return (count);
}
