#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: d
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(name);
		if (d->owner)
			free(owner);
		free(d);
	}
}
