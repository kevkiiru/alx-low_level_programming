#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array: the array of the function
 * @size: size of the array
 * @action: member of the function
 * Return: 0 always
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
