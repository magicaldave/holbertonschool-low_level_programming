#include "3-calc.h"
/**
 * op_add - adds two inputs
 * @a: int 1
 * @b: int 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
 * op_sub - subtracts one from another
 * @a: number to sub from
 * @b: amount to sub from a
 * Return: difference
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
 * op_mul - multiplies two inputs
 * @a: int to mult
 * @b: int to mult
 * Return: Product of mult
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - divides two numbers
 * @a: number to div
 * @b: number to div by
 * Return: result of division
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}
/**
 * op_mod - modulus of two numbers
 * @a: number to div
 * @b: number to div by
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
