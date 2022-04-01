#include <string.h>
#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * @src: string to be appended to dest
 * @n: number of bytesfrom src
 * @dest: destination
 * Return:pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
