#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: list to be freed
 * Return: always 0
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
