#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given
 * index of a dlistint_t linked list.
 *
 * @head: pointer to the head
 * @idx: position to delete
 * Return: pointer to new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *h = *head;
	unsigned int count = 0;

	if (!head)
		return (-1);
	while (h && count < idx)
	{
		h = h->next;
		count++;
	}
	if (count == idx && h)
	{
		if (h->prev)
			h->prev->next = h->next;
		if (h->next)
			h->next->prev = h->prev;
		if (count == 0)
			*head = h->next;
		free(h);
		return (1);
	}
	return (-1);
}
