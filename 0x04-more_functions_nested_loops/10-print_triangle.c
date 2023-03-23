#include "main.h"

/**
 * print_triangle - print_triangle
 * @size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, count = size;

	if (size >= 1)
	{
		for (i = 1; i <= size; i++)
		{
			for(j = 1; j <= size; j++)
			{
				if (j >= count)
					_putchar('#');
				else
					_putchar(' ');
			}
			count--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
