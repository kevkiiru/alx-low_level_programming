#include <stdio.h>
#include "main.h"

/**
 * main - function entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
