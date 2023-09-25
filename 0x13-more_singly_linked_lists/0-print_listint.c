#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @head: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *head)
{
	int count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
