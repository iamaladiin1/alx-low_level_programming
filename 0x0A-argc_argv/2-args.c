#include "main.h"
#include <stdio.h>

/**
 * main - printos argumentos
 * @argc: agumentc
 * @argv: agument values
 * Return: Always 0 (Success)
 */
int main(int argc, char**argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}

