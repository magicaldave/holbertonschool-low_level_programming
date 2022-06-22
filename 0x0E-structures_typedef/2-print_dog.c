#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog - prints name, age, owner elements of struct d
 * @d: structure containing dog stats
 */
void print_dog(struct dog *d)
{
	if (!d)
		exit(0);

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name %s\n", d->name);

	if (!d->age)
		printf("Age: (nil)");
	else
		printf("Age: %.1f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
