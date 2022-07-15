#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements in a linked list
 * @h: pointer to list_t list
 * Return: elements in h
 */

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}

	return (p);
}
