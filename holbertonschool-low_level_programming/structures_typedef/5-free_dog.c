#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory used by dog_t structure
 * @d: structure to free
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
