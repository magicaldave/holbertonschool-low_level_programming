#include "main.h"
#include <stdio.h>

/**
 * rev_string - takes a given string as input and reverses it
 * Return: always 0
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int s_l = 0, src_l;
	char *src = s, tmp;

	for (src_l = 0 ; *(s + src_l) != '\0' ; src_l++)
	{
	}
	src_l -= 1;
	while (src_l > s_l)
	{
		tmp = *(s + s_l);
		*(s + s_l) = *(src + src_l);
		*(src + src_l) = tmp;
		src_l--;
		s_l++;
	}
}
