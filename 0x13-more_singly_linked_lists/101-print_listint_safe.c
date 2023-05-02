#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Function to print a linked list of type listint_t
 * and return the number of nodes in that list
 * @head: Head of the linked list
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *fast_pointer, *slow_pointer;

	if (head == NULL)
		return (0);

	/**
	 * To be able to count the numbe rof nodes and going through the
	 * cycle only once, we use the two pointer method:
	 * one fast pointer that keeps track of all the nodes
	 * and one slow pointer that is used to detect loops in the linked
	 * list and is the one that is supposed to stop the traversal
	 */

	fast_pointer = slow_pointer = head;
	while (fast_pointer != NULL && fast_pointer->next != NULL)
	{
		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next->next;
		if (slow_pointer == fast_pointer)
		{
			do {
				nodes++;
				slow_pointer = slow_pointer->next;
			} while (slow_pointer != fast_pointer);
			do {
				fast_pointer = fast_pointer->next;
			} while (slow_pointer != fast_pointer);
			break;
		}
		nodes++;
	}
	slow_pointer = head;
	fast_pointer = count > loop_size ? NULL : fast_pointer;
	while (slow_pointer != fast_pointer && fast_pointer != NULL)
	{
		printf("[%p] %d\n", (void *)slow_pointer, slow_pointer->n);
		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next;
		nodes++;
	}

	if (fast_pointer != NULL)
		printf("[%p] %d\n", (void *)slow_pointer, slow_pointer->n);

	return (nodes);
}
