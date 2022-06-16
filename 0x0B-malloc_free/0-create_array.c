#include "main.h"
#include <stdlib.h>

/**
 * create_array - builds an array of a specified size and initializes it
 * @size: number of elements to store
 * @c: character to initialize each element with
 * Return: NULL if failed, otherwise pointer to new array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size > 0)
		array = malloc(size * sizeof(char));
	if (array != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			array[i] = c;
		}
		return (array);
	}
	return (NULL);
}
