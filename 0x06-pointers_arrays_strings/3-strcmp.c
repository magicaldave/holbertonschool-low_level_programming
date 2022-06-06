#include "holberton.h"

/**
 * _strcmp - compare two strings via ascii values
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: difference between strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int diff = 0;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	return (diff);
}
