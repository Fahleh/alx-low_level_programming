#include "main.h"

/**
 * _realloc:- A function that reallocates a memory block
 * using malloc and free
 *
 * @ptr: Pointer to the previously allocated memory
 * @old_size: Size in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes of the new memory block
 *
 * Return: Pointer to new size memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *result;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	if (ptr == NULL)
	{
		result = malloc(new_size);

		if (result == NULL)
			return (NULL);

		return (result);
	}

	result = malloc(new_size);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		result[i] = ((char *)ptr)[i];

	free(ptr);

	return (result);
}
