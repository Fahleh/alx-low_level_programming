#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a
 * linked list
 *
 * @h: Pointer to the list
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
