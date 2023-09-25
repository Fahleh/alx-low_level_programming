#include "lists.h"

/**
 * free_listint2 - A function that frees a list and
 * sets the head to NULL
 *
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
