#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked:- A function that allocates memory using malloc
 * 
 * @b: Memory size
 *
 * Return: The pointer to allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
