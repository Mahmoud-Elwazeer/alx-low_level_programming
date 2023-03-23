#include "main.h"

/**
 * print_triangle - print_triangle
 * @size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size >= 1)
	{
		for (int i = 1; i <= size)
		{
			for(j = 1; j <= size)
			{
				if (j > i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
