#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer
 * @scr: pointer
 * @n: it will use at most n bytes from src
 * Return: array of string from function
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
