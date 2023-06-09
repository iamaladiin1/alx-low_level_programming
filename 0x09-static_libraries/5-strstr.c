#include "main.h"
#include <stdio.h>

/**
 * *_strstr - location of substring
 * @haystack: string searcher
 * @needle: substring needle
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int o, p;

	for (o = 0; haystack[p] != '\0'; i++)
	{
		for (p = 0; needle[o] != '\0'; j++)
		{
			if (haystack[p + o] != needle[p])
				break;
		}
		if (!needle[p])
			return (&haystack[o]);
	}
	return (NULL);
}
