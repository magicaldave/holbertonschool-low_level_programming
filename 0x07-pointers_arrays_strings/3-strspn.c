#include "main.h"

/**
 * _strspn - reads for a prefix string in an input string
 * @s: string to read for original input
 * @accept: accepted characters to check for
 * Return: number of matched characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, c, matched = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (c = 0 ; accept[c] != '\0' ; c++)
		{
			if (accept[c] == s[i])
			{
				matched++;
				break;
			}
		}
		if (accept[c] != s[i])
			return (matched);
	}
	return (matched);
}
