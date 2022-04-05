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
	int i;

	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		p[i] = s1[i];

	for (i = 0; i < s2_length; i++)
		p[s1_length + i] = s2[i];

	p[size - 1] = '\0';
	return (p);
}

