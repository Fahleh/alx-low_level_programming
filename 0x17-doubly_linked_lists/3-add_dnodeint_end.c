#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: List head
 * @n: Node to add
 * Return: Pointer to the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	node = *head;
	while (node->next)
		node = node->next;
	new->prev = node;
	node->next = new;
	return (new);
}
