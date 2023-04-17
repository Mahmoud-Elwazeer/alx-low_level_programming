#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct that will print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}