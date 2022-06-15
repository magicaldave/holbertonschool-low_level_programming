#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of all but the first and last args, if all are ints.
 * @argc: number of args
 * @argv: array of strings, with each place being one arg
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
			sum += atoi(argv[i]);
		else
		{
			printf("Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
