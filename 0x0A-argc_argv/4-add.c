#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the sum of all but the first and last args, if all are ints.
 * @argc: number of args
 * @argv: array of strings, with each place being one arg
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, x, y;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (x = 1 ; x < argc ; x++)
	{
		for (y = 0 ; argv[x][y] ; ++y)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
