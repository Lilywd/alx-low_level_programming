#include <stdio.h>

/**
 * main -Print single digit numbers of base 10 using putchar only
 * Return: 0 for success
 */


int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}

