#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - fres up
 * @h: head
 *
 * Return: number to return
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
