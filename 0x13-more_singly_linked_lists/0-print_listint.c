#include "lists.h"

/**
 * print_listint - Function to print all the elements of a linked list
 * and returns the number of nodes afterwards
 * @h: Linked list to be printed.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t list_length = 0;

	/**
	 * Traverse the list while it has elements and print every node
	 * before moving to the next one
	 */
	while (h)
	{
		printf("%d\n", h->n);
		list_length++;
		h = h->next;
	}
	return (list_length);
}
