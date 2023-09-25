#include "lists.h"

/**
 * pop_listint - A function that deletes the head none a linked list
 *
 * @head: Pointer to head
 *
 * Return: Data of the head 0 otherwise
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !(*head))
		return (0);

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;


	return (data);
}
