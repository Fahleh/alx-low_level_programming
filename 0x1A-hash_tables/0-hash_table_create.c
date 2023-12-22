#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 *
 * @size: Size of the array.
 * Return: Pointer to the table or NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(*table));
	hash_node_t **arr;
	unsigned long int i = 0;

	if (!table)
		return (NULL);
	arr = malloc(size * sizeof(*arr));
	if (!arr)
	{
		free(table);
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = arr;
	return (table);
}
