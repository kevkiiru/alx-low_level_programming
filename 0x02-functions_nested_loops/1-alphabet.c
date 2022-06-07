# include <stdio.h>
# include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0 (succes)
*/

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		a++;
	}
	putchar('\n');
}
