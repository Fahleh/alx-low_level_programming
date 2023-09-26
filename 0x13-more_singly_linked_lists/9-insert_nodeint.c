#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a node
 * at a given position
 *
 * @h: Pointer to the head
 * @n: Data
 * @idx: Index to insert node
 *
 * Return: Pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *new;
	listint_t *temp = *h;

	new = malloc(sizeof(*new));

	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;

		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (NULL);
}
