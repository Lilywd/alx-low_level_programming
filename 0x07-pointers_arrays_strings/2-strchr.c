#include <string.h>
#include "main.h"

/**
 * _strchr - function that locates the first occurence
 *  of a character in a string
 * @s: string to be searched for the character
 * @c: character to search for
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *f;

	f = strchr(s, c);
	return (f);
}
