#include <stdio.h>
#include "dog.h"

/**
 * print_dog - printer for variable
 * @d: a variable of the dog
 */

void print_dog(struct dog *d)
{

	if (d == NULL) /* validates if d initiated correctly */
		return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);

}

