# include<stdio.h>
# include "main.h"

/**
 * _puts - main entry point
 * @str: main integer
 * Return: 0 always
 */

void _puts(char *str)
{
	*str = ("I'm now an ALX Student learning Software Engineering!!\n");

	puts(*str);
}
