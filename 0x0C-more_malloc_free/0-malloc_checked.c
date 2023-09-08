#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked:- A function that allocates memory using malloc
 * and exits with status value of 98 if it fails.
 *
 * @b: Size of memory
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);

}
