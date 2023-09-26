#include "lists.h"

/**
 * _called - A function that checks if a node has been called
 *
 * @node: Pointer to node
 * @called: List of called nodes
 * @count: Length
 *
 * Return: 1 if is visited and 0 otherwise
 */

int _calledAgain(const listint_t *node, const listint_t **called, int count)
{
	int i = 0;

	while (i < count)
	{
		if (node == called[i])
			return (1);
		i++;
	}

	return (0);
}


/**
 * free_listint_safe - A function that frees a list even with loop
 *
 * @head: Pointer to head
 *
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *temp, *called[1024];
	int count = 0;

	if (!head)
		return (-1);

	while (*head)
	{
		if (_calledAgain(*head, called, count))
		{
			*head = NULL;
			break;
		}

		called[count++] = *head;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (count);
}
