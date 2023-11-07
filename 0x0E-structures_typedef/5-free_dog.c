#include "dog.h"

/**
 * free_dog - free memory allocated previously
 * @d: free dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
