#include "main.h"

/**
 * _pow_recursion - recursively multiplies x by itself y times
 * @x: number to multiply
 * @y: number of times to power up n
 * Return: -1 on error, 1 if y is 0, x to power of y to parent function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
