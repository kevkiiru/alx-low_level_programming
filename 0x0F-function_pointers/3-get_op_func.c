#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that performs operation asked by user
 * @s: operator passed as argument
 *
 * Return: NULL if !s otherwise return the operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	a = 0;

	while (a < 10)
	{
		if (s[0] == ops->op[a])
			break;
		a++;
	}

	return (ops[a / 2].f);
}
