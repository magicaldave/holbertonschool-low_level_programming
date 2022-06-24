#ifndef DOG
#define DOG
/**
 * struct dog - details about your dog!
 * @name: name of doggo
 * @owner: name of owner. compatible with single- or double-parent households.
 * @age: age of dog, accepting partial years
 */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;

/**Function Declarations*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /**DOG*/
