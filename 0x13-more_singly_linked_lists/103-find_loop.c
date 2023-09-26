#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 *
 * @head: pointer to the head
 *
 * Return: Address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *chill = head;
	listint_t *hype = head;

	while (hype != NULL)
	{
		chill = chill->next;
		hype = (hype->nex)->next;

		if (chill == hype)
		{
			chill = head;

			while (chill != hype)
			{
				chill = chill->next;
				hype = hype->next;
			}

			return (chill);
		}
	}

	return (NULL);
}
