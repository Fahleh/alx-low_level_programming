#include "lists.h"

/**
 * add_nodeint - A function that adds a node to a
 * singly linked list
 *
 * @head: Pointer to head
 * @n: Data
 *
 * Return: pointer to new elemnt
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;


	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (new)
}
