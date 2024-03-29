#include <stdio.h>
#include "lists.h"

/**
 * print_list - it will print print the list
 * @h: the pointer
 *
 * Return: the above
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
