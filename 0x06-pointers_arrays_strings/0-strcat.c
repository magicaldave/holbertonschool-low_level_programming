#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination string
 * @src: string to be appended to dest
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int dn, sn;

	for (dn = 0 ; dest[dn] != '\0' ; dn++)
	{
	}
	for (sn = 0 ; src[sn] != '\0' ; sn++)
	{
		dest[dn] = src[sn];
		dn++;
	}
	return (dest);
}

