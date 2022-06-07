#include "main.h"

/**
 * _strstr - return address of one string, if it occurs within another
 * @h: string to read
 * @n: string to search for in h
 * Return: null on fail, address of n in h otherwise
 */

char *_strstr(char *h, char *n)
{
	int i, x;
	int c = 0;

	for (i = 0 ; h[i] != '\0' ; i++)
	{
		if (h[i] != n[0])
			continue;
		else
		{
			for (x = i ; h[x] == n[c] && h[x] != '\0' ; x++)
			{
				c++;
				if (n[c] == '\0')
					return (&h[i]);
			}
		}
	}
	return ('\0');
}
