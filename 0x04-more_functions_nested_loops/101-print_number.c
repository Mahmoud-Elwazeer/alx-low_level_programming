#include "main.h"

/**
 * print_number - print integer
 * @n: Number to Print
 * Return: void
 */
void print_number(int n)
{
	int count = 0, calc = n;
	int rem = 1, p;
	int i, flag = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			flag = -1;
			n = -n;
			calc = n;
		}
		while (calc > 0)
		{
			calc = calc / 10;
			count++;
		}
		if (flag == -1)
			_putchar('-');
		while (count > 0)
		{
			for (i = 1; i <= count; i++)
			{
				rem = rem * 10;
			}
			p = n % rem / (rem / 10);
			_putchar(p + '0');
			rem = 1;
			count--;
		}
	}
}
