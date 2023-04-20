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

		if (ch == 'c')
			printf("%c", va_arg(args, int));
		else if (ch == 'i')
			printf("%d", va_arg(args, int));
		else if (ch == 'f')
			printf("%f", va_arg(args, double));
		else if (ch == 's')
		{
			printf("%s", va_arg(args, char *));
		}
		if (i != len-1 && (ch == 'c' || ch == 'i' || ch == 'f' || ch == 's'))
			printf(", ");
		else if (i == len - 1)
			printf("\n");
		i++;
	}
	va_end(args);
}
