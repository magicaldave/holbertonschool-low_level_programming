#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog - prints name, age, owner elements of struct d
 * @d: structure containing dog stats
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age != d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
