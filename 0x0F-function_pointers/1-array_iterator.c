#include "function_pointers.h"

/**
 * array_iterator - A function that executes a given function as
 * a parameter on each element of an array.
 *
 * @array: Array
 * @size: Size of the array
 * @action: A pointer to the function you need to use
 *
 * Return: Void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
