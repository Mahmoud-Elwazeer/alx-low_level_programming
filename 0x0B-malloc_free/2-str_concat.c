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
	char *stc;

	if (s1 != NULL)
		for (size1 = 0; *(s1 + size1) != '\0'; size1++)
			;
	else
		size1 = 0;
	if (s2 != NULL)
		for (size2 = 0; *(s2 + size2) != '\0'; size2++)
			;
	else
		size2 = 0;
	size = size1 + size2;
	stc = (char *)malloc(size * sizeof(char) + 1);
	if (stc == NULL)
		return (NULL);
	for (count = 0; count < size1; count++)
		*(stc + count) = *(s1 + count);
	count = 0;
	for (; size1 <= size; size1++)
		*(stc + size1) = *(s2 + count++);
	return (stc);
}
