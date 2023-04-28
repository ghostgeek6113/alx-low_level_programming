#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function to free a linked list.
 * @head: struct representing the linked list to be freed
 * Return: 
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
