#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *newstr;

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

	return (newstr);
}
