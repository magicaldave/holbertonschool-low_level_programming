#include <stdio.h>

/*
 * This program counts to 98 from a passed int
 */

/**
 * print_to_98 - counts to 98 from source int
 * Return: always 0
 * @n: int to count from
 */
int print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	return (0);
}
