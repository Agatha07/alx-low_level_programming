#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees up memory allocated for the dog
 * @d: pointer to dog to free.
 */
void free_dog(dog_t *d)
{
	if (d)

	free(d->owner);
	free(d->name);
	free(d);
}
