# include <stdio.h>

/**
 * main - prints the strings in the printf function
 * description: prints values in bytes
 * Return: 0
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of char: %lu bytes\n", sizeof(acharacter));
	printf("Size of int: %lu bytes\n", sizeof(ainteger));
	printf("Size of long int: %lu bytes\n", sizeof(along));
	printf("Size of long long: %lu bytes\n", sizeof(alonglong));
	printf("Size of float: %lu bytes\n", sizeof(afloat));
	return (0);
}
