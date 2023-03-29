#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: array of string from function
 */
char *_strcat(char *dest, char *src)
{
	int i, size = 0;
	static char r[10000];

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		*(r + i) = *(dest + i);
		size++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + size + i) = *(src + i);
		*(r + size + i) = *(src + i);
	}
	*(dest + size + i) = '\0';
	*(r + size + i) = '\0';
	return (r);
}
