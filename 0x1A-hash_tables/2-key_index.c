#include "hash_tables.h"

/**
 * key_index - A function that gets the index of a key.
 *
 * @key: Key to be evaluated.
 * @size: size of the table
 * Return: Index of the key.
 */

unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
