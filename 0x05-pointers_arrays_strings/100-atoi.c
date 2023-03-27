#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: pointer point to start string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, r, flag;

	for (i = 0; (*(s + i)) != '\0'; i++)
	{
		if (*(s + i) == '-')
			flag = -1;
		else if (*(s + i) == '+')
			flag = 1;
		if ((*(s + i) >= 'a' && *(s + i) <= 'z') || (*(s + i) >= 'A' && *(s + i) <= 'Z'))
			continue;
		if (*(s + i) >= '0' && *(s + i) <= '9')
			r = *(s + i) - '0';
	}
	return (r * flag);
}
