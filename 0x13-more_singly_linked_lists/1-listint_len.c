
#include "lists.h"

/**
 * listint_len - number of elements
 * @h: pointer number
 * Return: int
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
