#include "main.h"

/**
 * swap_int - changes the values of two pointers with one another
 * @a: int whose value is changed to a
 * @b: int whose value is changed to b
 */

void swap_int(int *a, int *b)
{
	int a_n = *b;
	int b_n = *a;
	*a = a_n;
	*b = b_n;
}
