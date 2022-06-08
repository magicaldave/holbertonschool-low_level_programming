#include "main.h"

/**
 * factorial - returns factorial of given int
 * @i: int to factor
 * Return: factorial of i
 */

int factorial(int i)
{
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (1);
	return (i * factorial(i - 1));
}
