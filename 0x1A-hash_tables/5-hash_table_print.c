#include "hash_tables.h"

/**
 * print_list - A function that prints all nodes in a linked list.
 * @node: Pointer to a node.
 */
void print_list(hash_node_t *node)
{
	if (!node)
		return;
	printf("'%s': '%s'", node->key, node->value);
	if (node->next)
	{
		printf(", ");
		print_list(node->next);
	}
}

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: Table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int count = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (count)
			{
				printf(", ");
				count = 0;
			}
			print_list(ht->array[i]);
			count = 1;
		}
		i++;
	}
	printf("}\n");
}
