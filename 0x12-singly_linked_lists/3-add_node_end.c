#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Function to adds a new node at the end of a linked list.
 * @head: head of the list
 * @str: element to be added
 * Return: Address of the new element added to the list or
 * Null if failed to add
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, n = 0;
	list_t *new_element;
	list_t *tmp;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		n++;

	new_element->len = i;
	new_element->str = strdup(str);
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_element;

	return (new_element);
}
