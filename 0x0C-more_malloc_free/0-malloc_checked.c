#include "main.h"

/**
 * malloc_checked:- A function that allocates memory using malloc
 * and exits with status value of 98 if it fails.

 * @b: Size of allocated memory
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);

}
