#include <stdio.h>
#include "main.h"

/**
 *  print_diagsums - function that prints the sum of the two
 *  diagonals of a square matrix of integers
 *  @a: array pointer
 *  @size: size of array
 *  Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
		sum += *(a + i * size + i);
			printf("%i, ", sum);
				sum = 0;
	for (j = 0; j < size; j++)
		sum += *(a + size * (j + 1) - (j + 1));
		printf("%i\n", sum);
}
