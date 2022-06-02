#include "main.h"

/**
 * _strcpy - copies one string to another location
 * Return: pointer to destination string
 * @dest: location to copy to
 * @src: string to be copied
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (c >= 0)
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
		c++;
	}
	return (dest);
}
