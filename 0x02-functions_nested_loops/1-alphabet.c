#include "main.h"

void print_alphabet(void);
/**
 * print_alphabet -  prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}