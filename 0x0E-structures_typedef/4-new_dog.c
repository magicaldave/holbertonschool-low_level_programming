#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - manually builds a dog struct and error-checks it
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog pointer; NULL on failures
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(newdog));
	char *name_cpy, *owner_cpy;
	unsigned int i;

	if (!newdog)
		return (NULL);

	if (!name || age != age || !owner)
		free(newdog);
		return (NULL);

	name_cpy = malloc(sizeof(name) * sizeof(*name_cpy));
	owner_cpy = malloc(sizeof(owner) * sizeof(*owner_cpy));

	if (!name_cpy || !owner_cpy)
	{
		free(newdog);
		return (NULL);
	}



	for (i = 0 ; i < sizeof(name) ; i++)
		name_cpy[i] = name[i];
	for (i = 0 ; i < sizeof(owner) ; i++)
		owner_cpy[i] = owner[i];

	newdog->name = name_cpy;
	newdog->age = age;
	newdog->owner = owner_cpy;

	return (newdog);
}
