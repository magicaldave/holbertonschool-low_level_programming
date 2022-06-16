#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings into a new one
 * @s1: beginning of new string
 * @s2: second half of new string
 * Return: NULL on fail, or duped string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int is1, is2;
	int c, d;
	char *dupe;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	is1 = strlen(s1) && (is2 = strlen(s2));
	dupe = malloc((is1 + is2 + 1) * sizeof(char));
	if (dupe == NULL)
		return (NULL);
	for (c = 0 ; s1[c] != '\0' ; c++)
	{
		dupe[c] = s1[c];
	}
	d = c;
	for (c = 0 ; s2[c] ; c++)
	{
		dupe[d] = s2[c];
		d++;
	}
	return (dupe);
}
