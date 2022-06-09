# include<stdio.h>
# include "main.h"

/**
 * print_to_98 - entry point
 * @e: checking character
 * Return: 0;
*/

void print_to_98(int e)
{
	int a, b;

	if (e <= 98)
	{
		for (a = e; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (e >= 98)
	{
		for (b = e; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
