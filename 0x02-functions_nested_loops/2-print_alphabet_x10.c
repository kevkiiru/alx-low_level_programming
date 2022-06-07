# include <stdio.h>
# include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	int i = 0;

	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}
}
