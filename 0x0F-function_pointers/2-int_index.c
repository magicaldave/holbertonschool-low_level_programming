#include "function_pointers.h"

/**
 * int_index - performs input action on input array
 * @array: integer array to act on
 * @size: size of array to read
 * @cmp: pointer to desired function
 */

int int_index(int *array, int size, retint cmp)
{
	int i;

	if (size <= 0 || (!(array && cmp)))
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		int r = cmp(array[i]);
		if (r != 0)
			return (i);
	}

	return (-1);
}
