#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	for ( c = 0 ; src[c] != '\0'; c++ )
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
		  break;
	}
	return (dest);
}
