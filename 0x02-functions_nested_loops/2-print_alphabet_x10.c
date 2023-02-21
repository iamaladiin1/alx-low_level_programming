#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
