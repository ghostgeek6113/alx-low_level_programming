#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list_t
 * list
 * @h: input
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	int num_elements = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
