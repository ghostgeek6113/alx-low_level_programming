#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function to delete a node at index i a linked
 * list
 * @head: Head of the linked list
 * @index: Index at which we are to delete the node starting from 0
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *previous = NULL;
	listint_t *current = *head;

	if (!head || !*head)
		return (-1);

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (i < index || !current)
		return (-1);

	if (!previous)
		*head = current->next;
	else
		previous->next = current->next;

	free(current);
	return (1);
}
