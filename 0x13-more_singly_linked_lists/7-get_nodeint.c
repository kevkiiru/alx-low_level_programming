#include <stdio.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 * @head: pointer to the list
 * @index: main integer
 *
 * Return: the nth node or NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
