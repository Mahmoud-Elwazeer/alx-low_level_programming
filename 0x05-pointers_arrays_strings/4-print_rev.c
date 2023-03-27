#include "main.h"

/**
 * print_rev - print reverse string
 * @s: pointer to point start
 * Return: void
 */
void print_rev(char *s)
{
	int count;

	for (count = 0; (*(s + count)) != '\0'; count++);
	while (count > 0)
	{
		count--;
		_putchar(*(s + count));
	}
}

