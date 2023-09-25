#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data of a list
 *
 * @h: Head of the list
 *
 * Return: Sum of all data in the list.
 */

int sum_listint(listint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h =  h->next;
	}

	return (sum);
}
