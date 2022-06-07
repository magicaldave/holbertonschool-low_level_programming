#include "holberton.h"

/**
 * _strcpy - copies one string to another location
 * Return: pointer to destination string
 * @dest: location to copy to
 * @src: string to be copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for ( i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
