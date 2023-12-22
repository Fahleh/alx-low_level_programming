#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves the value associated with a key.
 *
 * @ht: Hash table.
 * @key: Key to retrieve
 * Return: value of key in ht or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	if (temp)
	{
		while (strcmp(temp->key, key) != 0)
			temp = temp->next;
		if (temp)
			return (temp->value);
	}
	return (NULL);
}
