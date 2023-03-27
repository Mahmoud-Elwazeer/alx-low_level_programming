#include "main.h"

/**
 * swap_int - swaping the value of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
