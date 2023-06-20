#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: Source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	static char cp[1000];
	int i;

	for (i = 0; (*(src + i)) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
		*(cp + i) = *(src + i);
	}
	*(dest + i) = '\0';
	*(cp + i) = '\0';
	return (cp);
}
