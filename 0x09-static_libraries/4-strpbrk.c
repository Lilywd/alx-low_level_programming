#include <string.h>
#include "main.h"

/**
 * _strpbrk -   function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string to be scanned
 * @accept: string containing the bytes to match
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *t;

	t = strpbrk(s, accept);
	return (t);
}
