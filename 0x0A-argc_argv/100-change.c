#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry func
 * @argc: Number of commands
 * @argv: array include commands
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n = 0;

	if (argc > 1)
	{
		n = atoi(argv[1]);
		if (n >= 0)
		{
			printf("1\n");
		}
		else
			printf("0\n");
	}
	else
		printf("Error\n");
	return (0);
}
