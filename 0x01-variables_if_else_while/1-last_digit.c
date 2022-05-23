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
	printf("Last digit of %d is %d ", n, (n % 10));
	if ((n % 10) == 0)
		printf("and is 0\n");
	else if ((n % 10) > 5)
		printf("and is greater than 5\n");
	else if ((n % 10) < 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
