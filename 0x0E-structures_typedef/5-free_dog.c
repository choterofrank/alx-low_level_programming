#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees up the memory allocated for struct dog
 * @d: struct dog to be freed from the memory
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}


