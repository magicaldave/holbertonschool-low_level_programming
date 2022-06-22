#include "dog.h"
#include "stdio.h"

/**
 * print_dog - prints name, age, owner elements of struct d
 * @d: structure containing dog stats
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
