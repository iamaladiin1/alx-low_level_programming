#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - freelist
 * @head: address
 **/

void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
