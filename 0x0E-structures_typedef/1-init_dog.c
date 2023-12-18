#include <stdlib.h>
#include "dog.h"

/**
 *  init_dog - initializes a variable of type struct dog
 *  @d: pointer to the struct dog to be initialize
 *  @name: the name to be initialize
 *  @age: the age of the dog to be initialize
 *  @owner: owner of dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

