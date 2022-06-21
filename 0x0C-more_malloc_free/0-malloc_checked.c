#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *newmem;

	newmem = malloc(b);
	if (newmem == NULL)
		exit(98);
	return (newmem);
}
