#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array array
 * @cmp:  pointer to the function to
 * be used to compare values
 * Return: -1 if size <= 0 or if no elements matches
 * 0 if int_index returns the index of the
 * first element for which the cmp function does not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
