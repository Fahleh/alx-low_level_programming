#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - Adds a new node at beginning of a linked list.
 *
 * @head: Pointer to a list_t list.
 * @str: Value to add.
 *
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len])
		len++;

	node = malloc(sizeof(list_t));
	if (node == null)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	*head = node;

	return (*head);
}
