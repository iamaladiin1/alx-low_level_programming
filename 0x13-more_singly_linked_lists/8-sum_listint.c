#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all data
 * @head: address of head
 * Return: integre
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
