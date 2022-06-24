#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: print a number passed into it
 */

int main(argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
