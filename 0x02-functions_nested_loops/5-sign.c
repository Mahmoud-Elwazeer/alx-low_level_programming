#include "main.h"

/**
 * print_sign -  prints the sign of a number
 * @n: Number Whose check
 * Return: 1 and prints + if n is greater than zero
 * oR 0 and prints 0 if n is zero oR -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		_putchar('+');
		check = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		check = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		check = -1;
	}
	return (check);
}
