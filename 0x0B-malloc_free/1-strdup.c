#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates an input string into a new one with dynamic memory
 * @str: input string to dupe
 * Return: NULL on fail, or duped string
 */

char *_strdup(char *str)
{
	int istr, c;
	char *dupe;

	if (str == NULL)
		return (str);
	for (istr = 0 ; str[istr] != '\0' ; istr++)
	{
	}
	dupe = malloc((istr + 1) * sizeof(char));
	if (dupe != NULL)
	{
		for (c = 0 ; c < istr ; c++)
		{
			*(dupe + c) = *(str + c);
		}
	}
	return (dupe);
}
