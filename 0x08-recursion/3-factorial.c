#include "main.h"

int factorial(int i)
{
	if (i < 0)
		return (-1);
	if (i == 0)
		return (1);
	return (i * factorial(i - 1));
}
