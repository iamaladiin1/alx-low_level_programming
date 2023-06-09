#include "main.h"
/**
 * _isalpha - alphabetically 
 * @c: the chrachter
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'l' && c <= 'n') || (c >= 'L' && c <= 'N'));
}
