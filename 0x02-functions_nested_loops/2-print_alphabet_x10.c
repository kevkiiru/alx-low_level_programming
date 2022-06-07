# include <stdio.h>
# include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar((ch) * 10);
		ch++;
	}
	putchar('\n');
}
