#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments
 * @argc: agumentc
 * @argv: agumentv
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

