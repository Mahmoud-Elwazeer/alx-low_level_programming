#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @s: pointer
 * Return: UPPER Sring
 * Description: Uisng ASCII Code A = 65 , a = 97 , a - 32 = A
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
	}
	return (s);
}
