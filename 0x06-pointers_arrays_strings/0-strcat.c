#include <string.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: string to be appended to dest
 * @dest: destination
 * Return:pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
