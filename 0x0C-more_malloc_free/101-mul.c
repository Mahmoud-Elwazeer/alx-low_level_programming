#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main  Entry point
 * @argc: number of input
 * @argv: array of input
 * Return: Always 0 when success
 */
int main(int argc, char *argv[])
{
	long mul, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%ld", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
