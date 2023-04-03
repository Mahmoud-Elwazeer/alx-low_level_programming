#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: source
 * @needle: dest
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	int flag = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle + j++))
			flag = 1;
	}
	if (flag)
		return (needle);
	else
		return ('\0');
}
