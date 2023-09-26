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

	listint_t = *h;
	listint_t *head = *h;
	listint_t *new, *temp = *h;

	if (!h)
		return (NULL);

	while (head && i < idx)
	{
		temp = head;
		head = head->next;
		i++;
	}

	if (i < idx)
		return (NULL);

	new = malloc(sizeof(*new));

	if (new)
	{
		new->n = n;
		new->next = head;
		if (temp == head)
			*h = new;
		else
			temp->next = new;
	}

	return (new);
}
