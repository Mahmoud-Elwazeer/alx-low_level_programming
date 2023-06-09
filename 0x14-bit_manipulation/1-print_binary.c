#include "main.h"

/**
 * print_binary -  print number as binary
 * @n: the number
 * Return: void
 * long int = 4 byte so 0 - 31 bit
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1;
	unsigned int num, flag = 0;

	if (n == 0)
		_putchar('0');
	while (i >= 0 && n != 0)
	{
		num = (n >> i) & 1;
		if (num == 1 && flag == 0)
			flag = 1;
		if (flag == 1)
			_putchar(num + '0');
		i--;
	}
}
