#include <string.h>
#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: main string to be scanned
 * @needle:the small string to be searched with-in haystack string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *t;

	t = strstr(haystack, needle);
	return (t);
}
