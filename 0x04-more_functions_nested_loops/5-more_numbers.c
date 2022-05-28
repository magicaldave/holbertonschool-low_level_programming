#include "main.h"

/**
 * more_numbers - print 1-14, ten times
 * Return: void
 */
void more_numbers(void)
{
	int c, l;

	for (l = 0 ; l < 10 ; l++)
	{
		for (c = 0 ; c <= 14 ; c++)
		{
			if (c >= 10)
			{
			_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar(10);
	}
}
