#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - fuctions that prints numbers 0 through 9
 *except 2 and 4
 *followed by a new line
 *Return:  0 for success
 */

void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar('\n');
}
