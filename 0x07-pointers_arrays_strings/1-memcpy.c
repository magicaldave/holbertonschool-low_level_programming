#include "main.h"

/**
 * _memcpy - compies n amount of one memory area to another
 * @dest: destination memory area
 * @src: source memory area to be copied
 * @n: number of memory spaces to be copied
 * Return: destination pointer, rewritten
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
