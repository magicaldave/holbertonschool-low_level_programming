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
	if (n == 0 || n == 1)
		return (n);
	return (iactuallydothemath(2, n));
}

/**
 * iactuallydothemath - actually checks what sqrt is
 * @beg: starts at 2, counts up until sqrt of end
 * @end: number to square, passed from _sqrt_recursion
 * Return: -1 if no sqrt, else return sqrt of end
 */

int iactuallydothemath(int beg, int end)
{
	if (end >= beg)
	{
		if ((beg * beg) == end)
			return (beg);
		if (beg * beg < end)
			return (iactuallydothemath(++beg, end));
	}
	return (-1);
}
