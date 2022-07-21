#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: main integer
 * @index: the index
 * Return: value of bit at index or -1 for error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (n >> index) & 1;

	return (val_bit);
}
