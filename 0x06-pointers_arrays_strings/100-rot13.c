#include <string.h>
#include "main.h"

/**
 * rot13 -  function that encodes a string
 * @str: string to be encoded
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int i = 0;

		for (i = 0; str[i] != '\0' ; i++)
		{

			if (*(str + i) >= 'a' && *(str + i) < 'n')
			{
				*(str + i) += 13;

			}

			else if (*(str + i) >= 'n' && *(str + i) <= 'z')
			{
				*(str + i) -= 13;
			}
		}
	return (str);
}
