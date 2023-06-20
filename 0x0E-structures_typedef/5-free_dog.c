#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - First variable
 * @d: - the second variable
 *
 * Return: ...
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

