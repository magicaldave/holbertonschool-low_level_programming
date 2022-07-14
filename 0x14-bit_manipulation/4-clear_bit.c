#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: input number
 * @index: digit to clear
 * Return: 1 upon success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > max_bits)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
