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

int delete_nodeint_at_index(listint_t **h, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *temp = *h;
	listint_t *curr = NULL;

	if (*h == NULL)
		return (-1);

	if (idx == 0)
	{
		*h = (*h)->next;
		free(temp);
		return (1);
	}

	while (i < idx - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	curr = temp->next;
	temp->next = curr->next;
	free(curr);

	return (1);
}

