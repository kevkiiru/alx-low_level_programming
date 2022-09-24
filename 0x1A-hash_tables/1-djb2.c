#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: string to the hash
 * Return: hash index corresponding to the string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int a;

	hash = 5381;
	while ((a = *str++))
	{
		hash = ((hash << 5) + hash) + a;
	}

	return (hash);
}
