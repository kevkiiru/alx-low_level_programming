#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 * @args: the argument count
 * @argv: the argument vector
 * Return: print a number passed into it
 */

int main(argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("The number of arguments is: %d\n", argv[]);
	}
	return (0);
}
