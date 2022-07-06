#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * op_add - function that adds integers
 * @a: integer one
 * @b: integer two
 * Return: the outcomes of the arithmetics
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts the integers
 * @a: integer one
 * @b: integer two
 * Return: the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies the integers
 * @a: integer one
 * @b: integer two
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides the integers
 * @a: integer one
 * @b: integer two
 * Return: the subtraction
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that modulos the integers
 * @a: integer one
 * @b: integer two
 * Return: the modulo
 */

int op_mod(int a, int b)
{
	return (a % b);
}
