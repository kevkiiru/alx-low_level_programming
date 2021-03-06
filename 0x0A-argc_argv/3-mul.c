#include <stdio.h>
#include "main.h"

/**
 * _atoi - converting the string to integers
 * @s: main character
 *
 * Return: 0 always
 */

int _atoi(char *s)
{
	int a, b, c, d, leng, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	leng = 0;
	digit = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';

			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - entry point of the function
 * @argc: argument counter
 * @argv: argument vector
 * Return: result of multiplication and 1 if false
 */

int main(int argc, char **argv)
{
	int total, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	total = num1 * num2;

	printf("%d\n", total);

	return (0);
}
