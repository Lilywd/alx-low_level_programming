#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: 0 for success
 */
void print_line(int n)
{
int i = 0;

if (n > 0)
{
for (i = 0; i < n; i++)
_putchar('_');
}
_putchar('\n');
}
