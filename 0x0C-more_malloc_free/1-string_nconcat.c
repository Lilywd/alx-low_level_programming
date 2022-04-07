#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string to be appended to string one
 * @n: s2 bytes to concatenate
 * Return: null if function fails,else pointer
 * to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i;

	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length - 3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	ptr = malloc(s1_length + n + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		ptr[i] = s1[i];

	for (i = 0; i < s2_length; i++)
		ptr[s1_length + i] = s2[i];

	ptr[size - 1] = '\0';
	return (ptr);
}
