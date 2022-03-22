#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * function that prints a combination of two digits
 * Return: 0 for success
 */

int main(void)
{
	int a, b, a1, b1;

	for (a = 0; a < 10; a++)
	{
		for (a1 = 0; a1 < 9; a1++)
		{
			for (b = 0; b < 10; b++)
			{
				for (b1 = 0; b1 < 10; b1++)
				{
					putchar('0' + a);
					putchar('0' + a1);
					putchar(' ');
					putchar('0' + b);
					putchar('0' + b1);

					if (a != 9 || a1 != 8 || b != 9 || b1 < 9)
					{

						putchar(',');
						putchar(' ');
					}

				}

			}
		}
	}

	putchar('\n');
	return (0);
}
