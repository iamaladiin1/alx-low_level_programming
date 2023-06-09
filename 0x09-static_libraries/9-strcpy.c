#include "main.h"

/**
 * *_strcpy - copier
 * include
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, l;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (l = 0; l < len; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}
