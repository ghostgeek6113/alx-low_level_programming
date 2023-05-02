#include "lists.h"

/**
 * listint_len - Function that returns the length of a linked list without
 * printing the elements of the list
 * @h: linked list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t list_length = 0;

	/* Traverse the list while it has elements */
	while (h)
	{
		list_length++;
		h = h->next;
	}
	return (list_length);
}
