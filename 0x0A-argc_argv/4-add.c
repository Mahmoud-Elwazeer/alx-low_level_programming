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
	int i, sum = 0;
	int flag = 1;

	for (i = 1; i < argc; i++)
	{
		if (!(argv[i][0] >= '0' && argv[i][0] <= '9'))
		{
			flag = 0;
			break;
		}
		sum += atoi(argv[i]);
	}
	if (flag)
		printf("%d\n", sum);
	else
		printf("Error\n");
	return (0);
}
