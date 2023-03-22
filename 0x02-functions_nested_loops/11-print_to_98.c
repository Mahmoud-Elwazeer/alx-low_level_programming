#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 * @n: Starting Number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
}
