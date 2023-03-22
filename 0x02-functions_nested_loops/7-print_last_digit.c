#include "main.h"

/**
 * print_last_digit - print_last_digit
 * @n: The Number wh print its last digit
 * Return: last digit of the number and print it
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;
	last_digit = (long)n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
