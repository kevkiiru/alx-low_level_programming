# include<stdio.h>
# include "main.h"

/**
 * int - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			_putchar('Fizz');
		else if (a % 5 == 0)
			_putchar('Buzz;);
		else (a % 3 && a % 5)
			_putchar("%d", a);

		-putchar('\n');
	}
	return (0);
}
