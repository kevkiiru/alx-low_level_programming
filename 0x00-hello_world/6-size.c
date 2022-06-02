# include <stdio.h>

/**
 * main - prints the strings in the printf function
 * description: prints values in bytes
 * Return: 0
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu bytes/n", sizeof(intType));
	printf("Size of float: %zu bytes/n", sizeof(floatType));
	printf("Size of double: %zu bytes/n", sizeof(doubleType));
	printf("Size of char: %zu bytes/n", sizeof(charType));

	return (0);
}
