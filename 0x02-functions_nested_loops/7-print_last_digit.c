#include "main.h"

/**
 * print_last_digit - print_last_digit
 * @n: The Number wh print its last digit
 * return: last digit of the number and print it
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;
	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
