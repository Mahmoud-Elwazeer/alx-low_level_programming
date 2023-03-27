#include "main.h"

/**
 * rev_string - rev array of string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	int count, i = 0;
	char temp;

	for (count = 0; (*(s + count)) != '\0'; count++)
		;
	while (i < count / 2)
	{
		temp = *(s + i);
		*(s + i) = *(s + count - i - 1);
		*(s + count - i - 1) = temp;
		i++;
	}
}
