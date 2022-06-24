#include "function_pointers.h"

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
