#include "function_pointers.h"

/**
 * array_iterator - iteration takes place
 * @array: array 1
 * @size: the size
 * @action: remaining function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

