#include "main.h"

/**
 * _sqrt_recursion - returns sqrt of n
 * @n: int to square
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (iactuallydothemath(2, n));
}

/**
 * iactuallydothemath - actually checks what sqrt is
 * @beg: starts at 2, counts up until sqrt of end
 * @end: number to square, passed from _sqrt_recursion
 * Return: -1 if no sqrt, else return sqrt of end
 */

int iactuallydothemath(int root, int input)
{
	if (input >= root)
	{
		if ((root * root) == input)
			return (root);
		if (root * root < input)
			return (iactuallydothemath(++root, input));
	}
	return (-1);
}
