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

	for (istr = 0 ; str[istr] != '\0' ; istr++)
	{
	}
	dupe = malloc((istr + 1) * sizeof(char));

	if (str == NULL || dupe == NULL)
		return (NULL);
	for (c = 0 ; c < istr ; c++)
	{
		*(dupe + c) = *(str + c);
	}
	return (dupe);
}
