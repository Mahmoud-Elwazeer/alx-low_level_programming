#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to string
 * Return: string
 */
char *cap_string(char *s)
{
	int i, flag = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		switch(*(s + i))
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				flag = 1;
				continue;
		}
		if (flag == 1 && (*(s + i) >= 'a' && *(s + i) <= 'z'))
		{
			*(s + i) -= 32;
		}
		flag = 0;
	}
	return (s);
}
