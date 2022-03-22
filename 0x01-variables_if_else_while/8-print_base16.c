#include<stdio.h>

/**
* main -Prints all numbers of base 16 in lowercase followed by newline
* Return: 0 for success
*/

int main(void)
{
int i;
char a;

for (i = '0'; i <= '9'; ++i)
	putchar(i);
for (a = 'a'; a <= 'f'; ++a)
	putchar(a);
putchar('\n');
return (0);
}

