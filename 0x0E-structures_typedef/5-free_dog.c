#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer to the dogs
 *
 * Return: 0 always
 */

void free_dog(dog_t *d);
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
