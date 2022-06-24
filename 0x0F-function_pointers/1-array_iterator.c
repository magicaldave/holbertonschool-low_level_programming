#include "function_pointers.h"

/**
 * array_iterator - call action on array
 * @array: array to be acted upon
 * @size: num elements in array
 * @action: pointer (typedef'd) to passed function
 */

void array_iterator(int *array, size_t size, intaction action)
{
	unsigned int i;

	if (size > 0 && array && action)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}
}
