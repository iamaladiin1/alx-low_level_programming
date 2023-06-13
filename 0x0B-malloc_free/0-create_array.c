#include "main.h"
#include <stdlib.h>

/**
 * i'm gonna create it
 * character 
 * @size: This is the size
 * @c: the char value
 * Return: I'm Returning Pointer value
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (!size)
		return (NULL);
	s = (char *)malloc(size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

