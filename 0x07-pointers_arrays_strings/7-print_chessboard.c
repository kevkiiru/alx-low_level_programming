#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: main character
 *
 * Return: 0 always
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
