#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 *
 * @head: Head
 *
 * Return: Pointer to the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *front = NULL;

	while (*head)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	*head = back;

	return (*head);
}

