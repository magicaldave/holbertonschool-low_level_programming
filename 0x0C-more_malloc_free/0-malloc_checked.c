#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and returns 98 on failure
 * @b: precalculated size of memory to allocate
 */

void *malloc_checked(unsigned int b)
{
	int *newmem;

	newmem = malloc(b);

	if (!newmem)
		exit(98);
	return (newmem);
}
