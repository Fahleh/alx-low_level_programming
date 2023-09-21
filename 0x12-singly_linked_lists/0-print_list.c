#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 *
 * @h: Pointer to the list_t list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == Null)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
