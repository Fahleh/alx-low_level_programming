#include "main.h"
#include <stdlib.h>

/**
 * _calloc:- A function that allocates memory for an array,
 * using malloc
 *
 * @nmemb: Number of elements
 * @size: Size of element
 *
 * Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		result[i] = 0;

	return (result);
}
