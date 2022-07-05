#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that computes the details of the dog
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: 0 always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
