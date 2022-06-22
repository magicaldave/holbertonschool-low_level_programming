#include "main.h"
#include <stdlib.h>

/**
 * array_range - builds an array and populates with ints
 * @min: minimum number to store in array
 * @max: max number to store in array
 * Return: NULL on fail, pointer to int array on success
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	arr = malloc(size * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		arr[i] = (min + i);
	arr[i] = '\0';

	return (arr);
}
