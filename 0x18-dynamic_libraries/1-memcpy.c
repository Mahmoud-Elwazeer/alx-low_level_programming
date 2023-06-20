#include "main.h"

/**
 * _memcpy -  function copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: Number of bytes
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, count = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + count++);
	}
	return (dest);
}
