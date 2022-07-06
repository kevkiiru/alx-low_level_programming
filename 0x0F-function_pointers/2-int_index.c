#include <stdlib.h>
#include "fucntion_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array in the function
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no element matches otherwise 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}

	return (-1);
}
