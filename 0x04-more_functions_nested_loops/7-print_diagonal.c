#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
			_putchar('\\');
		else
			_putchar(' ');
	}
	_putchar('\n');
}

