#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a new one
 * @s1: beginning of new string
 * @s2: second half of new string
 * Return: NULL on fail, or duped string
 */

char *str_concat(char *s1, char *s2)
{
	int is1, is2, c;
	char *dupe;

	if (s1 != NULL)
	{
		for (is1 = 0; s1[is1] != '\0'; is1++)
		{
		}
	}
	if (s2 != NULL)
	{
		for (is2 = 0; s2[is2] != '\0'; is2++)
		{
		}
	}
	dupe = malloc((is1 + is2 + 1) * sizeof(char));
	if (dupe != NULL)
	{
		for (c = 0 ; c < is1 ; c++)
		{
			*(dupe + c) = *(s1 + c);
		}
		for (c = 0 ; c < (is1 + is2) ; c++)
		{
			*(dupe + is1 + c) = *(s2 + c);
		}
	}
	return (dupe);
}
