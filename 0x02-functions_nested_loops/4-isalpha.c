#include "main.h"

/*
 * This program check character case
 */

/**
 * _isalpha - converts characters to int and checks their range
 * Between {a..z} and {A..Z}
 * Return: 1 if alpha, 0 if anything else
 * @c: char to convert in ASCII Decimal
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
			}
	else
	{
		return (0);
			}
}
