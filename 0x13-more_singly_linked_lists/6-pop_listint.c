#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list and returns the head node's data(n)
 * @head: double pointer to the list
 *
 * Return: the deletion or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
