#include "lists.h"

/**
 * add_nodeint_end - Function to add a new node at the end of the linked list
 * @head: Pointer to the current head of the list
 * @n: Data to be inserted as new node
 * Return: The address of the element added or NULL if there is nothing
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp_node = *head;

	new_node = malloc(sizeof(listint_t));

	/* check if the node is null then return NULL since there is nothing to add */
	if(!new_node)
		return (NULL);

	/**
	 * First we add the value to the node then set the pointer to
	 * NULL since itis the last element
	 * If the list is null, then the new element will be the head
	 * otherwise, iterate from the head till the last element
	 */
	new_node->n = n;
	new_node ->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp_node->next)
		tmp_node =tmp_node->next;

	tmp_node->next = new_node;
	return (new_node);
}
