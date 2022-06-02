#include "main.h"
#include <stdio.h>

/**
 * print_array - print a specified number of elements in an array
 * Return: always 0
 * @a: array to read
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
