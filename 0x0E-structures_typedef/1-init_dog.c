#include <stdio.h>
#include "dog.h"

/**
 * init_dog - the first dog variable
 * @d: another var
 * @name: names
 * @age: ages
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL) /* validate if d initiated correctly */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

