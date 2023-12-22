#include "hash_tables.h"

/**
 * free_list - A function that frees a list.
 * @node: Pointer to a node.
 */

void free_list(hash_node_t *node)
{
	hash_node_t *temp;

	while (node)
	{
		temp = node->next;
		free(node->value);
		free(node->key);
		free(node);
		node = temp;
	}
}

/**
 * hash_table_delete - A funcrion that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		free_list(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
