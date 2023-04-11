#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string
 * Return: a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	ptr = (char *)malloc(i * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (; i >= 0; i--)
	{
		*(ptr + i) = *(str + i);
	}
	if (str == NULL)
		return (NULL);
	return (ptr);
}
