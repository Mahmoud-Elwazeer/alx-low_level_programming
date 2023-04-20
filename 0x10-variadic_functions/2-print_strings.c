#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string, followed by a new line.
 * @separator: is the string to be printed between the string
 * @n: is the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
