#include <stdio.h>
#include <string.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: -1 If n is lower than 0  and 1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

