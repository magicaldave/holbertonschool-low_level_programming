#include "main.h"

/**
 * _strstr - return address of one string, if it occurs within another
 * @h: string to read
 * @n: string to search for in h
 * Return: null on fail, address of n in h otherwise
 */

char *_strstr(char *h, char *n)
{
	int i;
	int c = 0;

	for (i = 0 ; h[i] != '\0' ; i++)
	{
		for (c = 0 ; n[c] != '\0' ; c++)
		{
			if (h[i + c] != n[c])
				break;
		}
		if (!n[c])
			return (&h[i]);
	}

	return ('\0');
}
