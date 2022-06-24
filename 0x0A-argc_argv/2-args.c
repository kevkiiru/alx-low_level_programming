#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
