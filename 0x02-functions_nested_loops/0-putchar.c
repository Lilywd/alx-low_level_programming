#include <unistd.h>
#include "main.h"

/**
* main - print the word "_putchar"
* Return:  0 for Success
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}

