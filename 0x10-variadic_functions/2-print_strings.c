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

		if (i == n - 1)
		{
			if (str == NULL)
				printf("(nil)\n");
			else
				printf("%s\n", str);
		}
		else
		{
			if (separator != NULL)
			{
				if (str == NULL)
					printf("(nil)%s", separator);
				else
					printf("%s%s", str, separator);
			}
			else
			{
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
			}
		}
	}
	va_end(args);
}
