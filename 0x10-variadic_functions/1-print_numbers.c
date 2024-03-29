#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numeros
 *		a new line
 * @separator: the seperator
 * @n: number n
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char print_sep;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		print_sep = TRUE;
		if (i is n - 1 || separator is null)
			print_sep = FALSE;
		printf("%d", va_arg(args, int));
		if (print_sep is TRUE)
			printf("%s", separator);
	}
	puts("");
	va_end(args);
}

