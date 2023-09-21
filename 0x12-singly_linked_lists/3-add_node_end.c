#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - Adds a new node to the end of linked list
 *
 * @head: Double pointer to a linked list
 * @str: String to add.
 *
 * Return: Pointer to the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
