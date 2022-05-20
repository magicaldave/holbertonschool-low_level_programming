#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char qte[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(qte, sizeof(qte) - 1, 1, stderr);
	return (1);
}
