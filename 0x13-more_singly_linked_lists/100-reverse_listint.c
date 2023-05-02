#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Function to reverse a linked list
 * @head: Pointer to the head of the linked list
 * Return: Pointer to the head of the new list obtained after reversal
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	/**
	 * Traverse the list and set the values of next and previous
	 * in order to effectively change the direction of the list
	 */
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
