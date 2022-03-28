#include <string.h>
#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer  to the memory to be filled
 * @b: value to be filled to the memory block
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
