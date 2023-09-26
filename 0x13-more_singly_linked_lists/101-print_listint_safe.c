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

int _called(const listint_t *node, const listint_t **called, int count)
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
 * print_listint_safe - Prints the safe version of a linked list.
 *
 * @head: Pointer to the head.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *called[1024];

	while (head)
	{
		if (_called(head, called, count))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}

		called[count++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (count);
}
