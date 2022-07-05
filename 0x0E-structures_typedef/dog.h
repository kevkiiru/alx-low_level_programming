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
 * dog_info - the typedef for the struct dog
 */

typedef struct dog dog_info;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_info *new_dog(char *name, float age, char *owner);
void free_dog(dog_info *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
