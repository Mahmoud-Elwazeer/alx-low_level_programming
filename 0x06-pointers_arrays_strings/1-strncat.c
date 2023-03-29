#include "main.h"

/**
 * _strncar - concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: Number limit
 * Return: two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, size = 0;
	static char r[100];

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		*(r + i) = *(dest + i);
		size++;
	}
	for (i = 0; (i < n && *(src + i) != '\0'); i++)
	{
		*(dest + size + i) = *(src + i);
		*(r + size + i) = *(src + i);
	}
	*(dest + size + i) = '\0';
	*(r + size + i) = '\0';
	return (r);
}
