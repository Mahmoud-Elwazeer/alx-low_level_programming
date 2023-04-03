#include "main.h"

/**
 * _strchr - return string starting with char c
 * @s: pinter to string
 * @c: charcter
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			break;
		}
	}
	return (s + i);
}
