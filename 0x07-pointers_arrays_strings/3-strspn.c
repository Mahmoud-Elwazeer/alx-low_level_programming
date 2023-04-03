#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: source
 * @accept: dest
 * Return: the number of bytes in the initial segment of s which only in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + j) == *(accept + i))
				count++;
		}
	}
	return count;
}
