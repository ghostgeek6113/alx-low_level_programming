#include "lists.h"

/**
 * add_nodeint - Function to add a new node at the beggining of the list as
 * head and return the pointer to the next node.
 * @head: pointer to the current head of the linked list
 * @n: value to be inserted as the new head
 * Return: Pointer to the next node or NULL if there is nothing
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	/* Check if the node is empty and return NULL if true */
	if (!new_node)
		return (NULL);
	/**
	 * To add a node as the head of the list, we set the value of n to
	 * the value we want to add and set the pointer of the new node to
	 * point to the old head of the linked list.
	 * After the operation, we set the new head to be the new node
	 */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
