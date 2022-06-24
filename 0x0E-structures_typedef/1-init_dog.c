#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog structure
 * @d: empty structure
 * @name: name of dog to init
 * @age: age of dog to init
 * @owner: owner of dog to init
 * Return: only 0, only on fail
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
