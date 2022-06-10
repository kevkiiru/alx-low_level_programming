# include<stdio.h>
# include "main.h"

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	long int a;
	long int b;
	long int max;

	n = 612852475143;
	max = -1;

	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}

	for (b = 3; b <= sqrt(a); b = b + 2)
	{
		while (a % b == 0)
		{
			max = b;
			a = a / b;
		}
	}

	if (n > 2)
		max = a;

	printf("%ld\n", max)

		return (0);
}
