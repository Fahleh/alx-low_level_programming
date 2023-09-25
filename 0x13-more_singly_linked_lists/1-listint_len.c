#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list
 *
 * @head: Pointer
 *
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *head)
{
	int count = 0;

	while (head)
	{
		head = head->next;
		count++;
	}

	return (count);
}
