#ifndef DOG
#define DOG
/**
 * struct dog - details about your dog!
 * @name: name of doggo
 * @owner: name of owner. compatible with single- or double-parent households.
 * @age: age of dog, accepting partial years
 */
struct dog
{
	char *name, *owner;
	float age;
};

/**Function Declarations*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /**DOG*/
