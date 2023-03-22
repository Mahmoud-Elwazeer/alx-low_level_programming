#include "main.h"

/**
 * print_times_table -  prints the 9 times table, starting with 0
 * @n: number
 */
void print_times_table(int n)
{
	int i, j, check;

	if (n > 0 || n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				check = i * j;
				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					if (check > 99)
					{
						_putchar(check / 100 + '0');
						_putchar(((check / 10) % 10) + '0');
					}
					else if (check > 9)
					{
						_putchar(' ');
						_putchar(check / 10 + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(check % 10 + '0');
					if (j == n)
						continue;
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
