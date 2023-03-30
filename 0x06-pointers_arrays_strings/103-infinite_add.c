#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: 1st Number
 * @n2: 2nd Number
 * @r: return number
 * @size_r: size of r
 * Return: add two number
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

	for (i = 0; *(n1 + i) != '\0'; i++)
	{
		*(r + i) = *(n1 +i) + *(n2 +i);
	}
	return (r);
}
