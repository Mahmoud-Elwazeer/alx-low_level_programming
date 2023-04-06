#include "main.h"

/**
 * wildcmp - compare two string
 * @s1: string 1
 * @s2: string 1
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	else
		return (0);
}
