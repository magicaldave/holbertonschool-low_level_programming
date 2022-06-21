#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	int *newmem;

	newmem = malloc(b);

	if (!newmem)
		exit(98);
	return (newmem);
}
