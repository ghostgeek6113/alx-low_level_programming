#include <stdlib>
#include "lists.h"

/**
 * free_listint2 - Function to free a linked list
 * @head: Pointer to Pointer to the linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if  (head == NULL || *head ==NULL)
		return;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}