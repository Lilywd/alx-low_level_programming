#include <stdio.h>

/**
 * main -Prints alphabet in lowercase, excluding e and q
 * Return: 0 for success
 */


int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

