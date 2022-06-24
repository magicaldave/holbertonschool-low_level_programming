#include "function_pointers.h"

void array_iterator(int *array, size_t size, intaction action)
{
	unsigned int i;

	if (size > 0 && array && action)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}
}
