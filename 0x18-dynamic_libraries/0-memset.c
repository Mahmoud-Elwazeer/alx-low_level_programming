#include "main.h"

/**
 * _memset - fill function with a constant type
 * @s: pointer to locate starting
 * @b: constant
 * @n: Number of fill with constant
 * Return: pointer locate to new action
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
