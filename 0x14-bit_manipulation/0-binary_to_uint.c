#include "main.h"

/**
 * binary_to_uint - converts a binary input to uint
 * @b: string of 0 and 1
 * Return: 0 on bad input, or resulting int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 0, result = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	}

	for (i--; i >= 0; power++, i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		if (b[i] == '1')
			result += (1 << power);
	}

	return (result);
}
