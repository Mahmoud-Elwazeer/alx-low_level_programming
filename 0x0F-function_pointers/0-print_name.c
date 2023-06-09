#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name
 * @name: Name will print
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
	else
		return;
}
