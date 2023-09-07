#include <stdlib.h>
#include "main.h"

/**
 * array_range:- A function that creates an array of integers
 *
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: A pointer to the array
 */

int *array_range(int min, int max)
{
	int *result;
	int i;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		result[i] = min + i;

	return (result);
}
