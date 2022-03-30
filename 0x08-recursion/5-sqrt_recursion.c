#include <stdio.h>
#include "main.h"


/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number
 * @n: number
 * Return: 0
 */


int _sqrt_recursion(int n)

{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (findsqrt(n, 1));
}

/**
 * findsqrt - finds the squareroot of a number
 * @n: number
 * @j: incrementor
 * Return: -1
 */

int findsqrt(int n, int j)
{
	if (n == (j * j))
		return (j);
	else if (n > (j * j))
		return (findsqrt(n, j + 1));
	else
		return (-1);
}
