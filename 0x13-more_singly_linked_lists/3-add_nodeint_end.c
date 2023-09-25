#include "lists.h"

/**
 * add_nodeint_end - A function that adds a node to the
 * end of a singly linked list
 *
 * @head: Pointer to head
 * @n: Data
 *
 * Return: pointer to new elemnt
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(*new));

	if (!new)
		return (NULL);

	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (!(*head))
		{
			*head = new;
			return (new);
		}
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
