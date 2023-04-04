#include "lists.h"

/**
 * free_listint - it frees a linked list
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL) /* account for no linked list */
		return;

	while (head != NULL) /* have ptr keep track of head node and free */
	{
		ptr = head;
		head = head->next; /* move to next node while ptr frees prior */
		free(ptr);
	}
}
