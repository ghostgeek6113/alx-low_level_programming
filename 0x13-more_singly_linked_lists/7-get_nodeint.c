#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function to return the node at a given
 * index in a linked list
 * @head: Head of the linked list
 * @index:Index of the node to return starting from 0
 * Return: Node at index or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
