#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of input
 * @argv: Array of content
 * Return: always 0 when success
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char operator;

	if (argc > 4)
		exit(3);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	calc = (*get_op_func(&operator))(num1, num2);

	printf("%d\n", calc);
	return (0);
}
