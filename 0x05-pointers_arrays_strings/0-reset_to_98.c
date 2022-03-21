#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * Return: 0 for success
 */

int main(void)
{
	int n;
	int *ptr = reset_to_98;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);

	return (0);
}

