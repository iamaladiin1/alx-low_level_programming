#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - always check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "ALX-LOW_LEVEL_PROGRAMMING");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

