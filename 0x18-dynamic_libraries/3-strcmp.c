#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: diff between s1 & s2 (s1 - s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i, r;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		r = *(s1 + i) - *(s2 + i);
		if (r != 0)
			break;
	}
	return (r);
}
