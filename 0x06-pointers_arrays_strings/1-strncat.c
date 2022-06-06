#include "holberton.h"

/**
 * _strncat - concatenates strings, up to n characters
 * @dest: destination string to append
 * @src: string to add to dest
 * @n: number of characters to add
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dn, sn;

	for (dn = 0 ; dest[dn] != '\0' ; dn++)
	{
	}
	for (sn = 0 ; sn < n && src[sn] != '\0' ; sn++)
	{
		dest[dn] = src[sn];
		dn++;
	}
	if (src[sn] == '\0')
		dest[dn] = '\0';
	return (dest);
}

