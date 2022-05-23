#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * This C program generates a random integer
 * and evaluates if it is positive or negative.
 */

/**
 * main - Generate random number based on time at half of RAND_MAX.
 * Return: a big integer and a trailing string
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is 0\n", n);
	return (0);
}
