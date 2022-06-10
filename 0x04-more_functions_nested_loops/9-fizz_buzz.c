# include<stdio.h>
# include "main.h"

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; a++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf('\n');

	return (0);
}
