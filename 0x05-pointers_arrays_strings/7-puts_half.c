# include<stdio.h>
# include "main.h"

/**
 * puts_half - main entry point
 * @str: main integer
 * Return: 0 always
 */

void puts_half(char *str)
{
	int leng, a, b;

	leng = 0;
	while (str[leng] != '\0')
	{
		leng++;
	}

	if (leng % 2 == 0)
	{
		for (b = leng / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	}
	else if (leng % 2)
	{
		for (a = (leng - 1) / 2; a < leng - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar('\n');
}
