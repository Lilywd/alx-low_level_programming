#include <string.h>
#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @src: pointer to the source of data to be copied
 * @dest: destination where content is to copied
 * @n: number of bytes to copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
