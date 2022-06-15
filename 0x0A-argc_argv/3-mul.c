#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of multiplying argv[1] and argv[2]
 * @argc: number of args
 * @argv: array of strings, with each place being one arg
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1])) * (atoi(argv[2])));
	return (0);
}
