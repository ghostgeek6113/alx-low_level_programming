#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function that prints all the elements of the linked list
 * denoted by list_t.
 * @h: Struct representing list_t type
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int number_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		number_nodes++;
	}

	return (number_nodes);
}
