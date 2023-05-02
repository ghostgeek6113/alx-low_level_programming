#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Function to free safely a linked list
 * @h: Pointer to the head of the linked list
 * Return: Size of the freed linked list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	current = *h;
	if (!h || !*h)
		return (0);

	while (current != NULL)
	{
		next = current->next;
		free(current);
		size++;
		if (next >= current)
			break;
		current = next;
	}
	*h = NULL;

	return (size);
}
