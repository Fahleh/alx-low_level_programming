#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * index "index" of a list
 *
 * @h: Pointer to head
 * @idx: Index of node to delete
 *
 * Return: 1 on success, -1 otherwise.
 */

nt delete_nodeint_at_index(listint_t **h, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *temp = *h;
	listint_t *head = *h;

	if (!head || !h)
		return (-1);

	if (idx == 0)
	{
		*h = head->next;
		free(head);

		return (1);
	}

	while (head && i < idx)
	{
		temp = head;
		head = head->next;
		i++;
	}

	if (i < idx)
		return (-1);
	temp->next = head->next;
	free(head);

	return (1);
}
