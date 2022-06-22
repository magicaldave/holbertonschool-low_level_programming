#include "main.h"
#include <stdlib.h>

/**
 * _calloc - creates a char * memory space and populates it with zeroes
 * @nmemb: number of elements in array
 * @size: size in bytes of each element
 * Return: NULL on fail, pointer to new space on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newmem;
	unsigned int i;

	if (nmemb != 0 || size != 0)
	{
		newmem = malloc(nmemb * size);
		if (newmem == NULL)
			return (NULL);
		for (i = 0 ; i < nmemb ; i++)
		{
			newmem[i] = 0;
		}
		return (newmem);
	}

	return (NULL);
}
