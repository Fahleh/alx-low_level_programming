#include "function_pointers.h"

/**
* int_index - A function that searches for an integer
 *
 * @array: Array
 * @size: Size of array
 * @cmp: A pointer to a function
 *
 * Return: Index of first element for which cmp function does not
 * return 0, if no element matches, return -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
