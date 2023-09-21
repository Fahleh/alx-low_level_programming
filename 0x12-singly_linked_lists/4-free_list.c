#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 *
 * @head: List to be freed.
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}

