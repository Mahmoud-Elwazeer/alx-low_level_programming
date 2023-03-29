#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination for copy
 * @scr: source copy from
 * @n: limit index to copy from source
 * Return: copy string
 */
char *_strncpy(char *dest, char *src, int n)
{
	static char r[1000];
	int i, size = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		*(r + i) = *(dest + i);
	*(r + i) = '\0';
	for (i = 0; *(src + i) != '\0'; i++)
		size++;
	for (i = 0; i < n; i++)
	{
		if (i < size)
		{
			*(dest + i) = *(src + i);
			*(r + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
			*(r + i) = '\0';
		}
	}
	return (r);
}
