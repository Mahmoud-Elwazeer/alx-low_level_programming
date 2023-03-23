#include "main.h"

/**
 * print_number - print integer
 * @n: Number to Print
 * Return: void
 */
void print_number(int n)
{
	int count = 0, calc = n;
	int flag = 1;
	int p, pow = 1;
	int i;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			flag = -1;
			n = -n;
		}
		while (calc > 0)
		{
			calc = calc / 10;
			count++;
		}
		if (flag == -1)
			_putchar('-');
		while (n > 0)
		{
			count--;
			for (i = 1; i <= count; i++)
			{
				pow = pow * 10;
			}
			p = n / pow;
			n = n - pow;
			_putchar(p + '0');
			pow = 1;
		}
	}
}
