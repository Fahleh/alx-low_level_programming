#include "main.h"

/**
 * malloc_checked:- A function that allocates memory using malloc
 *
 * @b: Memory size
 *
 * Return: The pointer to allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
