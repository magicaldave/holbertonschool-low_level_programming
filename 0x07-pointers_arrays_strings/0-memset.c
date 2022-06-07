#include "main.h"
#include <stddef.h>

/**
 * _memset - fills a specified memory space with a char, n times
 * @s: pointer to be filled
 * @b: char to fill in
 * @n: amount of mem spaces to overwrite
 * Return: rewritten pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s)
	{
		for (i = 0 ; i < n ; i++)
			s[i] = b;
	}
	return (s);
}
