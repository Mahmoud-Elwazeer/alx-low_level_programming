#include <stdio.h>
#include "main.h"

/**
 * main - Entry func
 * @agrc: Number of commands
 * @agrv: array include commands
 * Return: Always 0
 */
int main(int agrc, char __attribute__ ((unused)) *agrv[])
{
	printf("%d\n", agrc - 1);
	return (0);
}
