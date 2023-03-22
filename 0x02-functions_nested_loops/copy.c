#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, check;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			check = i * j;
			if (check < 10)
			{
				_putchar(check + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(check / 10 + '0');
				_putchar(check % 10 + '0');
				if (j == 9)
					continue;
				_putchar(',');
			}
			if (j == 9)
				continue;
			_putchar(' ');
		}
		_putchar('\n');
	}
}
