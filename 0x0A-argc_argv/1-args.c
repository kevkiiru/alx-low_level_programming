#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("no of args is = %d\n", argc - 1);
	return (0);
}
