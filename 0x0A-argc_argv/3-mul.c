#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the function
 * @argc: argument counter
 * @argv: argument vector
 * Return: result of the multiplication, otherwise 1 for error
 */

int main(int argc, char **argv)
{
	int a, b, sum = 0;

	for (a = 0; a < argc; a++)
		for (b = 0; b < *argv; b++)
		{
			printf("%d\n", a * b);
		}
	return (0);

	if (a != argc && b != *argv)
		return (1);
}
