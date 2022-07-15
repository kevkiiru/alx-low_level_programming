#include <stdio.h>

void Tortoise(void) __attribute__ ((constructor));

/**
 * Tortoise - function that prints a sentence before the main function
 * is executed
 */

void Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
