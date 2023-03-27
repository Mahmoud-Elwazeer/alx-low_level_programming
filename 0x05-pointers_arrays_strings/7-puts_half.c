#include "main.h"

/**
 * puts_half - print half of string
 * @str: pointer string
 * Return: void
 */
void puts_half(char *str)
{
	int count, i = 0;

	for (count = 0; (*(str + count)) != '\0'; count++)
		;
	while (*(str + i) != '\0')
	{
		i++;
		if ((i < count / 2) && (i != count))
			continue;
		_putchar(*(str + i));
	}
	_putchar('\n');
}
