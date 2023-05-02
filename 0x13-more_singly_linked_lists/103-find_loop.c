#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Function to find loops in a linked list
 * and return the address of the beginning of the loop or NULL
 * if there are no loops
 * @head: Head of linked list
 * Return: Address of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_pointer = head;
	listint_t *slow_pointer = head;

	if (head == NULL)
		return (NULL);

	while (slow_pointer && fast_pointer && fast_pointer->next)
	{
		fast_pointer = fast_pointer->next->next;
		slow_pointer = slow_pointer->next;
		if (fast_pointer == slow_pointer)
			break;
	}
	
	if (!slow_pointer || !fast_pointer || !fast_pointer->next)
		return (NULL);
	slow_pointer = head;
	while (slow_pointer != fast_pointer)
	{
		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next;
	}
	return (fast_pointer);
}
