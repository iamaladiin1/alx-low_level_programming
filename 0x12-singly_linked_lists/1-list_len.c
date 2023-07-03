#include "lists.h"

/**
 * list_len - the calculations 
 * @h: Pointer to a list
 * Return: Int value
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
