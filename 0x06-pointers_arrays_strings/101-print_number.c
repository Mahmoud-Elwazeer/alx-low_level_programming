#include "main.h"

/**
 * print_number - print number
 * @n: Number
 * Return: void
 */
void print_number(int n)
{
	int count = 0, cp;
	int r, p = 1, i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	cp = n;
	if (n <= 9)
		_putchar(n + '0');
	else
	{
		while (cp > 0)
		{
			cp /= 10;
			count++;
		}
		while (n > 0)
		{
			for (i = 1; i < count; i++)
				p *= 10;
			r = n / p;
			n = n % (p * 10) - r * p;
			_putchar(r + '0');
			p = 1;
			count--;
		}
	}
	_putchar('\n');
}
