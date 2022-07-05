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

typedef struct dog dog_a;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_a *new_dog(char *name, float age, char *owner);
void free_dog(dog_a *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
