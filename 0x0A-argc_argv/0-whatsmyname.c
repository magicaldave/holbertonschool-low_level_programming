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
	printf("%s\n", argv[0]);
	return (0);
}
