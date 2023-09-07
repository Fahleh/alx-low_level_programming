#include "main.h"

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
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		result[b] = 0;
	return (result);
}
