#include "main.h"

/**
 * *_memcpy - will copy memory
 * @dest: destination 
 * @src: copy
 * @n: bytes 
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
