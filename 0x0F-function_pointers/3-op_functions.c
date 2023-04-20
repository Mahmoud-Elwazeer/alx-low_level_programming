#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - summ two numbers
 * @a: 1st Number
 * @b: 2nd Number
 * Return: sum two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two numbers
 * @a: 1st Number
 * @b: 2nd Number
 * Return: Sub two number
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two numbers
 * @a: 1st Number
 * @b: 2nd Number
 * Return: mul two number
 */
int op_mul(int a, int b)
{
	return ((long)a * b);
}

/**
 * op_div - div two numbers
 * @a: 1st Number
 * @b: 2nd Number
 * Return: div two number
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod two numbers
 * @a: 1st Number
 * @b: 2nd Number
 * Return: mod two number
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
