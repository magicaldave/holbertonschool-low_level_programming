#include "main.h"

/**
 * print_chessboard - prints a chessboard array
 * @a: chessboard array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, c = 0;

	for (c = 0 ; c < 8 ; c++)
	{
		for (i = 0 ; i < 8 ; i++)
			_putchar (a[c][i]);
	_putchar(10);
	}
}
