#include <string.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: main string to be scanned
 * @accept: string containing the number of bytes to match in s
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int n;

	n = strspn(s, accept);
	return (n);
}
