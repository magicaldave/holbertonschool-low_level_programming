#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program being ran
 * @argc: number of args
 * @argv: array of strings, with each place being one arg
 * Return: Always 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printcount(argc);
	return (0);
}

/**
 * printcount - prints number of args provided
 * @argc: size of argv array from main
 * return: always 0
 **/
void printcount(int argc)
{
	printf("%d\n", (argc - 1));
}
