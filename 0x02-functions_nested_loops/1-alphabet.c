#include "main.h"
/**
*  print_alphabet - Entry point
* Description: Print alphabet in lowercase
* followed by a new line
* Return: 0 for success
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
	_putchar(i);
	}
_putchar('\n');
}
