#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Function to insert a new node at given index
 * in a linked list
 * @head: Head of the linked list
 * @idx: Index where the new node will be added starting from 0
 * @n: Data in the new node
 * Return: Pointer to the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n){
	unsigned int i = 0;
	listint_t *prev = NULL;
	listint_t *current = *head;

	listint_t *new_node = malloc(sizeof(listint_t));
	if (head == NULL || new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current && i < idx)
	{
		prev = current;
		cuurent = current->next;
		i++;
	}

	if (i < idx)
	{
		free(new_node);
		return NULL;
	}
	new_node->next = current;
	prev->next = new_node;

	return (new_node);
}
