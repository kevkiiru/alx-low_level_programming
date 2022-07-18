#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node at the end of a
 * listint_t list
 * @head: pointer to the listint_t
 * @n: main integer
 * Return: address of the new element of NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
