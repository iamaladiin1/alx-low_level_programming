#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - include new node
 * @head: include address
 * @n: integer
 * Return: the new address
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
