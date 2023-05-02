#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function to delete the head and return the value of
 * the previous head
 * @head: Pointer to the head of the linked list
 * Return: Data in the previous head or 0 of the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	/* if the head and the pointer to the head are null, return 0 */
	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
