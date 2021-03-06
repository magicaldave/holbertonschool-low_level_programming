#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - reads a matrix and prits its diagonal sums
 * @a: matrix to read
 * @size: size of each row in matrix
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0 ; i < size ; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
