#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd String
 * Return: The returned pointer should point to a newly allocated 
 * space in memory which contains the contents of s1, followed by
 * the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, size, count = 0;
	char *str;

	for (size1 = 0; *(s1 + size) != '\0'; size1++)
		;
	for (size2 = 0; *(s2 + size2) != '\0'; size2++)
		;
	size = size1 + size2;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return NULL;
	for (count = 0; count <= size1; count++)
		*(str + count) = *(s1 + count);
	count = 0;
	size1++;
	for (; size1 <= size; size1++)
		*(str + size1) = *(s2 + count++);
	return (str);
