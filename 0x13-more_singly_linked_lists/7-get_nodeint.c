#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns a node
 * from a list
 *
 * @head: Pointer to head
 * @index: Index of node to return
 *
 * Return: Pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
