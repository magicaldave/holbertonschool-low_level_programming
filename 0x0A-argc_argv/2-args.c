#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program being ran
 * @argc: number of args
 * @argv: array of strings, with each place being one arg
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printall(argc, argv);
	return (0);
}

/**
 * printall - prints all arguments passed to main
 * @args: argv array from main
 * @argc: size of args
 * return: always 0
 **/
void printall(int argc, char **args)
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", args[i]);
}
