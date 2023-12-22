#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 *
 * @ht: The hash table.
 * @key: Key of the element.
 * @value: Value associated with the key.
 * Return: On success 1, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node, *temp;

	if (!ht || !key || !(*key))
		return (0);
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup((char *)key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	i = key_index((unsigned char *)key, ht->size);
	if (!(ht->array[i]))
	{
		ht->array[i] = new_node;
	}
	else
	{
		temp = ht->array[i];
		while (temp && strcmp(temp->key, new_node->key) != 0)
			temp = temp->next;
		if (temp)
		{
			free(temp->value);
			temp->value = new_node->value;
			free(new_node->key);
			free(new_node);
			return (1);
		}
		temp = ht->array[i];
		new_node->next = temp;
		ht->array[i] = new_node;
	}

	return (1);
}
