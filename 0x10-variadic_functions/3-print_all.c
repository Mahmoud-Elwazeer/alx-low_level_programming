#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int len = 0, i = 0;
	va_list args;

	while (*(format + len) != '\0')
	{
		len++;
	}
	va_start(args, format);
	while (i < len)
	{
		char ch = *(format + i);

		switch (ch)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			default:
				i++;
				continue;
		}
		if (i == len - 1)
			printf("\n");
		if (i != len - 1)
			printf(", ");
		i++;
	}
	va_end(args);
}
