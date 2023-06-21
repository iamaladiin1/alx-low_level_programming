#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - will execute 
 * @name: needed variable
 * @f: functionf
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

