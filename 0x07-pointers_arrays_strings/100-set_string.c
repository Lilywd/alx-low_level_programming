#include <string.h>
#include "main.h"
/**
 * set_string -function that sets the value of
 *  a pointer to a char
 *  @s: pointer to change
 *  @to: pointer to change to
 *  Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
