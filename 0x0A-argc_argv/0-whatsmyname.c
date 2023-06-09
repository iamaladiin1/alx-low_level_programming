#include "main.h"
#include <stdio.h>

/**
 * main - the prog prints its name fllwdd by a new line
 * @argc: argumentc
 * @argv: argumentv
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}

