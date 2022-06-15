#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program being ran
 * @argc: number of args
 * @argv: array of strings, with each place being one arg
 * Return: Always 0
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printname(*argv);
	return (0);
}

/**
 * printname - prints name of calling program (args[0])
 * @args: argv array from main
 * return: always 0
 **/
void printname(char *args)
{
	printf("%s\n", args);
}
