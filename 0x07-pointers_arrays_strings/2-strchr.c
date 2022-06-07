#include "main.h"

/**
 * _strchr - checks for first occurence of a char in a string
 * @s: string to read
 * @c: char to point to
 * Return: pointer to first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != c && s[i] != '\0'; i++)
	{
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
