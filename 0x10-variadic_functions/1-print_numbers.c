#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		unsigned int i;
		va_list args;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d", va_arg(args, int));
			else
				printf("%d%s", va_arg(args, int), separator);
		}
		va_end(args);
	}
}
