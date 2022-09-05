# include <stdio.h>
# include "main.h"

/**
 * main - Entry point
 * @c: main character
 * Description: prints out _putchar
 * Return: Always 0 (success)
*/

int main(char c)
{
	return (write(1, &c, 1));
}
