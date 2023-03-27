#include "main.h"

/**
 * puts_half - print half of string
 * @str: pointer string
 * Return: void
 */
void puts_half(char *str)
{
	int count, i;

	for (count = 0; (*(str + count)) != '\0'; count++)
		;
	if (count % 2 == 0)
	{
		i = count / 2;
		while ((*(str + i)) != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
	}
	else
	{
		i = count / 2 + 1;
		while ((*(str + i)) != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
