#include <stdio.h>
/**
 * main - Prints lowercase and then uppercase followed by a newline
 * Return: 0 for success
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
