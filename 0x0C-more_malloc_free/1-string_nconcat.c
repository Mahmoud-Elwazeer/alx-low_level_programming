#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number from string 2
 * Return: s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size1, size;
	unsigned int count = 0;

	for (size1 = 0; *(s1 + size1) != '\0'; size1++)
		;
	size = size1 + n;
	str = (char *)malloc(size);
	if (str == NULL)
		return (NULL);
	for (count = 0; count < size1; count++)
		*(str + count) = *(s1 + count);
	for (count = 0; count < n; count++)
		*(str + size1++) = *(s2 + count);
	*(str + size) = '\0';
	return (str);
}
