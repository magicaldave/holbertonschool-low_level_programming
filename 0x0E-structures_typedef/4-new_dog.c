#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *newdog = malloc(sizeof(*newdog));
	char *name_cpy, *owner_cpy;
	unsigned int i;

	if (!newdog)
	{
		free(newdog);
		return (NULL);
	}

	if (!name || age != age || !owner)
	{
		free(newdog);
		return (NULL);
	}

	name_cpy = malloc((strlen(name) + 1) * sizeof(*name_cpy));
	owner_cpy = malloc((strlen(owner) + 1) * sizeof(*owner_cpy));

	if (!name_cpy || !owner_cpy)
	{
		free(name_cpy);
		free(owner_cpy);
		free(newdog);
		return (NULL);
	}

	for (i = 0 ; i < strlen(name) ; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';

	for (i = 0 ; i < strlen(owner) ; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';

	newdog->name = name_cpy;
	newdog->age = age;
	newdog->owner = owner_cpy;

	return (newdog);
}
