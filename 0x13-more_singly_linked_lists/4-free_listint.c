#include "lists.h"

/**
 * free_listint - A function that frees a list
 *
 * @head: pointer to head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp - head->next;
		free(head);
		head = temp;
	}
}
