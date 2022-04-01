#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: Print lowercase alphabet 10 times
 * Return: 0 for success
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
	}
}
