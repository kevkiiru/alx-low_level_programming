#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - function that performs simple operations
 * @argc: the arguments
 * @argv: the array
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char a;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, num2);

	printf("%d\n", result);

	return (0);
}
