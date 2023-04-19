#include "function_pointers.h"

/**
 * print_name - print name
 * @name: Name will print
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
