#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: string one
 * @s2: string to be concatenated to string one
 * Return:  NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	int lena = strlen(s1);
	int lenb = strlen(s2);


	p = (char *)malloc(lena + lenb + 1);
	str_concat(s1, s2);
	p[lena + lenb] = '\0';
	return (0);
}

