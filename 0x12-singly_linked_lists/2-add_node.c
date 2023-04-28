#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a node
 * @head: head node
 * @str: string representing the value of the node to be added
 * Return: a new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *list;

	if (head == NULL)
		return (NULL);

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	list->len = i;
	list->str = strdup(str);
	list->next = *head;

	*head = list;

	return (list);
}
