#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function that checks for prime number
 * @n: number to check
 * Return: 1 if the input integer
 * is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (findprime(n, n - 1));
}

/**
 * findprime - checks for prime number
 * @n: number to check
 * @j: incrementor
 * Return:  1 if the input integer
 * is a prime number, otherwise return 0
 */

int findprime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (findprime(n, j - 1));
}
