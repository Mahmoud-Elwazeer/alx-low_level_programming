#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: source
 * @accept: dest
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;
	int flag = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(accept + i) == *(s + j++))
			flag = 1;
	}
	if (flag)
		return (s + 2);
	else
		return (accept);
}
