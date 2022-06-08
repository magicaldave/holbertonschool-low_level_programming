#include "main.h"

/**
 * _strpbrk - read for any instance of a specified char in a string
 * @s: string to read for original input
 * @accept: accepted characters to check for
 * Return: address of first matched character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, c;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (c = 0 ; accept[c] != '\0' ; c++)
		{
			if (accept[c] == s[i])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
