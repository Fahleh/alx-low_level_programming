#include "dog.h"
#include <stdlib.h>

/**
 * free_dog:- A function that frees dogs
 *
 * @d: Pointer to dog
 *
 * Return: Void
 */


void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
