#include "main.h"

/*
 * This program returns if an input number is positive, negative, or zero.
 */

/**
 * _abs - returns absolute value by multiplying by 1, or -1
 * Return: absolute value of input
 * @v: char to check as int
 */
int _abs(int v)
{
	return v * ((v>0) - (v<0));
}
