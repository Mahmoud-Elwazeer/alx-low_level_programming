#include "main.h"

/**
 * puts2 - print even charcter of string
 * @str: pointer
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	while ((*(str + count)) != '\0')
	{
		if (count % 2 == 0)
			_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
