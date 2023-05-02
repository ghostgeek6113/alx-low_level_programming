#include "lists.h"

/**
 * free_listint - Function to free a linked list
 * @head: linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
