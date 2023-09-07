#include "main.h"

/**
 * malloc_checked:- A function that allocates memory using malloc
 *
 * @b: Size of memory
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
