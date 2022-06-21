#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, up to N characters
 * @s1: string to be appended
 * @s2: string which IS appended
 * @n: number of chars to append from s2
 * Return: new string generated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *newstr, *junk;

	if (!s1)
		s1 = "";
	for (; s1[i] != '\0' ; i++)
	{
	}

	if (!s2)
		s2 = "";
	for (; (s2[j] != '\0') && j < n ; j++)
	{
	}

	newstr = malloc((i + j + 1) * sizeof(char));

	if (!newstr)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		newstr[i] = s1[i];
	for (j = 0 ; (s2[j] != '\0') && (j < n) ; j++)
		newstr[i + j] = s2[j];

	newstr[i + j] = '\0';

	junk = malloc(5);
	free(junk);

	return (newstr);
}
