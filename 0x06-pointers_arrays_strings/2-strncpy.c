#include <string.h>
#include "main.h"

/**
 * _strncpy-function that copies a string
 * @src: string to be appended to dest
 * @n: number of bytes to copy
 * @dest: destination
 * Return:pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
