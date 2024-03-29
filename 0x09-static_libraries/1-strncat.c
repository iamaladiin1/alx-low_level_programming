#include "main.h"

/**
 * _strncat - concatenation
 * @dest: destination
 * @src: source
 * @n: number n
 *
 * Return: the piointer to the resulting string destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
