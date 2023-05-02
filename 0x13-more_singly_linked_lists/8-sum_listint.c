#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Funtion to add all the data in nodes of a linked list
 * and return the sum
 * @head: Head of the linked list
 * Return: Sum of data in nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
