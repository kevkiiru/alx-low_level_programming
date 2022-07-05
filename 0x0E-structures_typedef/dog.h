#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - dog's info
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog - the typedef for the struct dog
 */

#define struct dog dog_t

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
