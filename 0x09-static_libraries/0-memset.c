#include "main.h"

/**
 * *_memset - jk memory
 * @s: memory area to be filled
 * @b: charachtery
 * @n: iterations
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
