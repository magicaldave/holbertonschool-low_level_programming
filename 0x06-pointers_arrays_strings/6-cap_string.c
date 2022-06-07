#include "holberton.h"

/**
 * cap_string - converts lowercase to uppercase characters per word
 * @str: input string to translate
 * Return: translated string as pointer
 */

char *cap_string(char *str)
{
	int i, seps;
	int isseparator;

	char separators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			if (str[i] <= 122 && str[i] >= 97)
				str[i] -= 32;
		}
		for (seps = 0 ; separators[seps] != '\0' ; seps++)
		{
			if (separators[seps] == str[i - 1])
				isseparator = 1;
		}
		if (str[i] >= 97 && str[i] <= 122 && isseparator == 1)
		{
			isseparator = 0;
			str[i] -= 32;
		}
		else
			isseparator = 0;
	}
	return (str);
}
