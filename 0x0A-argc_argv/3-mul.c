#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main _ Entry point
 * @argc:count of arguments passed to program
 * @argv: array of pointers to strings
 * Return: 0 for success
 */




int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
