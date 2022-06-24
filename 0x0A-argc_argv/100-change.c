#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the minimum number of coins to
 * make change
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if it returns change and 0 if it does not
 */

int main(int argc, char **argv)
{
	int a, num, result;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= cents[a])
		{
			result++;
			num -= cents[a];
		}
	}

	printf("%d\n", result);
	return (0);
}
