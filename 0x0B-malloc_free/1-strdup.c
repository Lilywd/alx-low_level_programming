#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - function returns a pointer to a new string
 * which is a duplicate of the string
 * @str: sring to be duplicated
 * Return: NULL if str = NULL On success, the _strdup function
 * returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
		return (NULL);
	p = (char *)malloc(strlen(str) + 1);
	if (p != NULL)
		strcpy(p, str);
	return (p);
}

/**
 * can also use
 * char *_strdup(char *str)
 * {
 *	char *str2;

 	if (str == NULL)
	{
	return (NULL);
	}
	str2 = strdup(str);
	if (str2 == NULL)
	{
		return (NULL);
	}
	return (str2);
 }*/
