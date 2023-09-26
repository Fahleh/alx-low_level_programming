#include "lists.h"

/**
 * loop_listint_len - A function that calculates the
 * length of a loop in a list
 *
 * @head: Pointer to the head
 *
 * Return: The number of nodes in the loop, or 0 if there is no loop
 */

size_t loop_listint_len(const listint_t *head)
{
	const listint_t *tortoise;
	const listint_t *hare;

	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = head->next->next;
	while (hare != NULL)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;

			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	return (0);
}


/**
 * free_listint_safe - A function that frees a list even with loop
 *
 * @h: Pointer to head
 *
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;

	size_t len;
	size_t i;

	len = loop_listint_len(*h);

	if (len == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
	}

	else
	{
		for (i = 0; i < len; i++)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}

		*h = NULL;
	}

	h = NULL;

	return (i);
}
