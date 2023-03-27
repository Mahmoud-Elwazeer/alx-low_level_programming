#include "main.h"

/**
 * print_rev - print reverse string
 * @s: pointer to point start
 * Return: void
 */
void print_rev(char *s)
{
	int count;

	count = _strlen(s);
	while (count < 0)
	{
		count--;
		_putchar (*(s + count));
	}
}

